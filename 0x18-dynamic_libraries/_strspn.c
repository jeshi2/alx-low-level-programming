#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int valid;
    while (*s)
    {
        valid = 0;
        while (*accept)
        {
            if (*accept == *s)
            {
                valid = 1;
                count++;
                break;
            }
            accept++;
        }
        if (valid == 0)
            break;
        s++;
    }
    return count;
}
