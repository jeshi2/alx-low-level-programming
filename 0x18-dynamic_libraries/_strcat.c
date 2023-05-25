#include "main.h"

char *_strcat(char *dest, char *src)
{
    char *ptr = dest;
    while (*dest)
        dest++;
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return ptr;
}
