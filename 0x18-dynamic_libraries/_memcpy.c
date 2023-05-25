#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *ptr = dest;
    while (n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    return ptr;
}
