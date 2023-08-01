# include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: the name of the created file
 * @text_content: the content of the file
 *
 * Return: 1 if succeded, -1 if not.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t i, wrote;
	int file_descriptor;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	if (text_content)
		wrote = write(file_descriptor, text_content, i);
	else
		wrote = write(file_descriptor, "", 0);
	if (wrote == -1)
	{
		close(file_descriptor);
		return (-1);
	}
	close(file_descriptor);
	return (1);
}
