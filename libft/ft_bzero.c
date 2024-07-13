#include <stddef.h>
#include <stdio.h>

void    *ft_memset(void *b, int c, size_t len);
size_t     ft_strlen(const char *s);


void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}
/*
int     main()
{
    char    a[] = "hello world";

    ft_bzero(a, sizeof(char) * ft_strlen(a));

    printf("%s\n", a);
}
*/