int     ft_isdigit(int c)
{
    if (c > 47 && c < 58)
        return (1);
    return (0);
}
/*
#include <stdio.h>
int     main()
{
    printf("%i", ft_isdigit(58));
}
*/