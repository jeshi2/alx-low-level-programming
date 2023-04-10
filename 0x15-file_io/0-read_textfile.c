#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *evans;
	int fname, fprnt;
	int fred, fcloz;

	fname = fprnt = fred = 0; evans = malloc(letters * sizeof(char));

	if (filename == NULL) /* Return 0 if file is NULL */
		return (0);

	fname = open(filename, O_RDONLY);
	if (fname == -1)
		return (0);

	fred = read(fname, evans, letters);
	if (fred == -1)
		return (0);

	fprnt = write(STDOUT_FILENO, evans, fred);
	if (fprnt == -1)
		return (0);

	fcloz = close(fname);
	if (fcloz == -1)
		return (0);

	free(evans);
	return (fred);
}

