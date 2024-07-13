#include <stddef.h>

size_t     ft_strlen(const char *s)
{
    size_t c;

    c = 0;
    while (s[c] != '\0')
    {
        c++;
    }
    return (c);
}
/*
#include <stdio.h>
int     main()
{
    char    ines[] = "inesgostosa";

    printf("%i\n", ft_strlen(ines));
    return (0);
}
*/