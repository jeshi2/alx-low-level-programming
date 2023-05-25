#include "main.h"

char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        char *ptr = accept;
        while (*ptr)
        {
            if (*ptr == *s)
                return s;
            ptr++;
        }
        s++;
    }
    return NULL;
}
