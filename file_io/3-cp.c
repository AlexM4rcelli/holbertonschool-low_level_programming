# include "main.h"

void cp(char *file_from, char *file_to)
{
	ssize_t wrote, readed;
	int file_descriptor;
	char *text_cont[1024];

	file_descriptor = open(file_from, O_RDONLY);

	readed = read(file_descriptor, text_cont, sizeof(text_cont));

	if (file_descriptor == -1 || readed == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	close(file_descriptor);
	file_descriptor = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (file_descriptor == -1 || readed == -1)
	{
		dprintf(2, "Error can't read from file %s\n", file_to);
		exit(99);
	}
	wrote = write(file_descriptor, text_cont, readed);
	if (wrote == -1)
	{
		close(file_descriptor);
		exit(100);
	}
	close(file_descriptor);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp(argv[1], argv[2]);

	return (0);
}
