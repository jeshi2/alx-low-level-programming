#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
    char *ptr = s;
    while (n > 0)
    {
        *s = b;
        s++;
        n--;
    }
    return ptr;
}
