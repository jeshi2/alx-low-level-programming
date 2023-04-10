#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/* this funct open file and adn text at end of file  */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, wrt; j = 0;

	if (filename == NULL)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[j] != '\0')
			j++;
		wrt = write(i, text_content, j);
		if (wrt == -1)
			return (-1);
	}

	close(j);
	return (1);
}
