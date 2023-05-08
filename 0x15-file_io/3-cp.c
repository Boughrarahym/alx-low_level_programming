#include "main.h"

/**
 * create_buff - function that allocates 1024 bytes for a buffer
 * @file: The name of the file buffer is storing chars for
 *
 * Return: pointer to the new allocated buffer
 */
char *create_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - fnction that closes file descriptors
 * @fd: The file descriptor to be closed
 */
void close_file(int fd)
{
	int f;

	f = close(fd);

	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function that copies the contents of a file to another file
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success, or the corresponding exit code on failure
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, rd, wt;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buff(argv[2]);
	f_from = open(argv[1], O_RDONLY);
	rd = read(f_from, buff, 1024);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (f_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		wt = write(f_to, buff, rd);
		if (f_to == -1 || wt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		rd = read(f_from, buff, 1024);
		f_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);
	free(buff);
	close_file(f_from);
	close_file(f_to);

	return (0);
}
