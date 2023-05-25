#include "main.h"

char *_strcpy(char *dest, char *src)
{
    char *ptr = dest;
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return ptr;
}
