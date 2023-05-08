#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: the text to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int op, wt, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(op, text_content, l);

	if (op == -1 || wt == -1)
		return (-1);

	close(op);

	return (1);
}
