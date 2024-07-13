#include <string.h>

char *    ft_strchr(const char *s, int c)
{
    char caracter = (char) c;
    char *prt;

    while (*s != 0)
    {
        if (*s == caracter)
            return ((char *)s);
        s++;
    }
    if (c == 0)
        return((char *)s);
    return (0);
}

#include <stdio.h>
int main ()
{
    char a[] = "dwwwd";
    printf("%s", ft_strchr(a, 0));
    printf("%s", strchr(a, 0));
}