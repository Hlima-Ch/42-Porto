int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
        return (1);
    return (0);
}

#include <stdio.h>
int     main()
{
    printf("%i", ft_isalnum(93));
}