#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t     ft_strlen(const char *s);

size_t      ft_strlcat(char * restrict dst, const char * restrict src, size_t size)
{
    size_t c;

    c = 0;
    while (dst[c] != 0)
    {
        c++;
    }
    if (ft_strlen(dst) + 1 < size)
    {
        while (size != 0)
        {
            dst[c] = *src;
            c++;
            src++;
            size--;
        }
        dst[c] = 0;
        return (ft_strlen(dst));
    }
    return (ft_strlen(src) + size);
}
int     main()
{
    char    dest[20] = "";
    char    orig[] = "";

    printf("%lu\n", ft_strlcat (dest, orig, 11));
    printf("%s\n", dest);
}
