#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/* Print error message if cant read to a file */
void file1fail(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/* Print error message if cant write to a file */
void file2fail(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/* Print error message if file cant close */
void closefail(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/*  main - copy the content of one file to another */
int main(int argc, char *argv[])
{
	int file1, file2, file1rd, file2wr, closed;
	char buffer[500];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (argv[1] == NULL)
		file1fail(argv[1]);

	if (argv[2] == NULL)
		file2fail(argv[2]);

	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
		file1fail(argv[1]);

	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (file2 == -1)
		file2fail(argv[2]);

	file1rd = read(file1, buffer, 500);
	if (file1rd == -1)
		file1fail(argv[1]);

	while (file1rd > 0)
	{
		file2wr = write(file2, buffer, file1rd);
		if (file2wr != file1rd)
			file2fail(argv[2]);

		file1rd = read(file1, buffer, 500);
		if (file1rd == -1)
			file1fail(argv[1]);
	}

	closed = close(file1);
	if (closed == -1)
		closefail(file1);

	closed = close(file2);
	if (closed == -1)
		closefail(file2);

	return (0);
}
