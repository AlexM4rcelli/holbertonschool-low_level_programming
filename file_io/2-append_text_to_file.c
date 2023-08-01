# include "main.h"

/**
 * append_text_to_file - append text at the end of file
 *
 * @filename: the name of the created file
 * @text_content: the content of the file
 *
 * Return: 1 if succeded, -1 if not.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t i, wrote;
	int file_descriptor;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;

	wrote = write(file_descriptor, text_content, i);

	if (wrote == -1)
	{
		close(file_descriptor);
		return (-1);
	}
	close(file_descriptor);
	return (1);
}
