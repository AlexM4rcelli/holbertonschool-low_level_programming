# include "main.h"

int
create_file(const char *filename, char *text_content)
{
	ssize_t i, readed, writed;
	int file_descriptor;
	char *buff;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 600);
	if (file_descriptor == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	buff = malloc(i);
	if (!buff)
		return (-1);
	writed = write(STDOUT_FILENO, buff, i);
	if (writed == -1)
	{
		close(file_descriptor);
		free(buff);
		return (-1);
	}
	close(file_descriptor);
	file_descriptor = open(filename, O_RDONLY);
	readed = read(file_descriptor, buff, i);
	if (readed == -1)
	{
		close(file_descriptor);
		free(buff);
		return (-1);
	}
	close(file_descriptor);
	free(buff);
	return (1);
}
