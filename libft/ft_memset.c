#include <stddef.h>
#include <stdio.h>

void    *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    char* pan;

    pan = (char*) b;
    i = 0;
    while (i < len)
    {
        pan[i] = c;
        i++;
    }
    return (b);
}
/*
int     main()
{
    char a[9];

    printf("%s", (char *)ft_memset(a, 'a', sizeof(char) * 8));
}
*/