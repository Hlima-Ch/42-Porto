int   ft_atoi(const char *str)
{
    int c;
    int i;
    
    i = 1;
    c = 0;

    while ((*str > 8 && *str < 14) || *str == 32)
        str++;
    if (*str == 45 || *str == 43)
    {
        if (*str == 45)
            i = -1;
       str++;
    }

    while (*str > 47 && *str < 58)
    {
        c = c * 10 + (*str - 48);
        str++;   
    }
    return (c * i);
}
/* 
#include <stdlib.h>
#include <stdio.h>

int     main(int argc, char **argv)
{
    if (argc)
    {
        printf("%i\n", atoi(argv[1]));
        printf("%i\n", ft_atoi(argv[1]));
    }
}
*/