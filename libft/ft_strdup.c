#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

size_t     ft_strlen(const char *s);


char *  ft_strdup(const char *s1)
{
    int c;
    char *sec;

    sec = (char *) malloc(sizeof(char)*ft_strlen(s1) + 1);
    c = 0;
    while (s1[c] != 0)
    {
        sec[c] = s1[c];
        c++;
    }
    sec[c] = 0;
    return (sec);
}
/*
int     main(int argc, char **argv)
{
    if (argc == 2)
    {
        printf("%s", ft_strdup(argv[1]));
    }
}
*/