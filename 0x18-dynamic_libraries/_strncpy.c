#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
    char *ptr = dest;
    while (*src && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    while (n > 0)
    {
        *dest = '\0';
        dest++;
        n--;
    }
    return ptr;
}
