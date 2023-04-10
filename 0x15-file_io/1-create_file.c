#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int create_file(const char *filename, char *text_content)
{
	int file, leng, clsd;

	mode_t mode = S_IRUSR | S_IWUSR;
	leng=0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[leng] != '\0')
			leng++;
		write(file, text_content, leng);
	}

	clsd = close(file);
	if (clsd == -1)
		return (-1);
	return (1);
}
