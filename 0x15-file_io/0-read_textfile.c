#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to POSIX stdout
 * @filename: name of the file
 * @letters: the number of letters to read and print
 *
 * Return: 0 if the function fails or filename is NULL
 * otherwise the actual number of bytes the function can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wt;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buff, letters);
	wt = write(STDOUT_FILENO, buff, rd);

	if (op == -1 || rd == -1 || wt == -1 || wt != rd)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(op);

	return (wt);
}
