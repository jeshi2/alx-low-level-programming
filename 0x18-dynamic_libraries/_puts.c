#include "main.h"

void _puts(char *s)
{
    while (*s)
    {
        _putchar(*s);
        s++;
    }
    _putchar('\n');
}

