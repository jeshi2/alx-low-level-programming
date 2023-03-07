#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * @s: the memory to fill
 * @b: the constant byte
 * @n: the number of bytes to fill
 *
 * Return: a pointed to the memory area s
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
