#include <stddef.h>

size_t     ft_strlen(const char *s);
 
size_t    ft_strlcpy(char * restrict dst, const char * restrict src, size_t size)
{
    int c;

    c = 0;
   // if (size )
    while (size > 1)
    {
        dst[c] = src[c];
        c++;
        size--;
    }
    if (size != 0)
        dst[c] = 0;
    return (ft_strlen (src));
}
#include <stdio.h>
#include <string.h>

int     main(int argc, char **argv)
{
if (argc == 3)
    {
    printf("%zu\n", ft_strlcpy (argv[1], argv[2], 0));
    printf("%lu\n", strlcpy (argv[1], argv[2], 0));
    printf("%s\n", argv[1]);
    
    }
}