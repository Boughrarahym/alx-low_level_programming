#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: the text to append to the end of the file
 *
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wt, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wt = write(op, text_content, l);

	if (op == -1 || wt == -1)
		return (-1);

	close(op);

	return (1);
}
