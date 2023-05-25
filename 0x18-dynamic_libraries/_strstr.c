#include "main.h"

char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        char *h = haystack;
        char *n = needle;
        while (*n && *h == *n)
        {
            h++;
            n++;
        }
        if (*n == '\0')
            return haystack;
        haystack++;
    }
    return NULL;
}
