int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t c;

    c = 0;
    if (n == 0)
        return (0);

    while (s1[c] == s2[c] && c != n-1)
        c++;
    return (s1[c] - s2[c]);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv)
{
    if (argc == 4)
    {
        printf("%i\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
        printf("%i\n", strncmp(argv[1], argv[2], atoi(argv[3])));

    }
    return (0);
}