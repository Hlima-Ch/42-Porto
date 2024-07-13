#include <stddef.h>

int   ft_atoi(const char *str);

char *     ft_strnstr(const char *s1, const char *s2, size_t n)
{
    int c;

    c = 0;
    if (*s2 == 0)
        return ((char *) s1);
    while (s1[c] != 0 && n > 0)
    {
        if (s1[c] == s2[0])
        {
            char * resp;
            resp = (char *)&s1[c];
            int i;

            i = 0;
            while (s1[c] == s2[i] && n > 0)
            {
                c++;
                i++;
                n--;
                if (s2[i] == 0)
                    return (resp);
            }
            if (n == 0)
                return (0);
        }
        c++;
        n--;
    }
    return (0);
}

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int     main(int argc, char **argv)
{
    if (argc == 4)
    {
        printf("%s\n", ft_strnstr(argv[1], argv[2], ft_atoi(argv[3])));
        printf("%s", strnstr(argv[1], argv[2], ft_atoi(argv[3])));
    }
}