# include "main.h"

ssize_t
read_textfile(const char *filename, size_t letters)
{
	ssize_t readed = 0, writed = 0;
	int file_descriptor;
	char *buff;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	buff = malloc(letters);

	if (!buff)
	{
		close(file_descriptor);
		return (0);
	}

	readed = read(file_descriptor, buff, letters);
	if (readed <= 0)
	{
		close(file_descriptor);
		free(buff);
		return (0);
	}

	writed = write(STDOUT_FILENO, buff, readed);
	if (readed != writed)
	{
		close(file_descriptor);
		free(buff);
		return (0);
	}

	close(file_descriptor);
	free(buff);
	return (writed);
}
