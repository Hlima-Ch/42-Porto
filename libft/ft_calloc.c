#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int   ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
void    *ft_memset(void *b, int c, size_t len);

void *    ft_calloc(size_t count, size_t size)
{
    void *ptr;

    ptr = malloc(count * size);

    if (!ptr)
        return (NULL);
    ft_bzero(ptr, count * size);
    return (ptr);
}

int     main()
{
        char *teste = "heitor";
        teste = ft_calloc(6, sizeof(char));
        if (*teste == 0)
            printf("esta nulo trenga\n");
        return (0);
}
