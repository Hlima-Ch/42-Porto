#include <stddef.h>
#include <stdio.h>
#include <string.h>

 void *     ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
 {
    const char *origem;
    char *destino;

    destino = dst;
    origem = src;
    while (n--)
    {
        *destino++ = *origem++;
    }
    return(dst);
 }

 int    main()
{
    char    orig[20] = "lima";
    char    dest[7] = "";
    ft_memcpy (dest, orig, 3);
    printf("%s\n", orig);
    printf("%s\n", dest);
 }