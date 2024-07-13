int     ft_isprint(int c)
{
    if (c > 31 && c < 127)
        return (1);
    return (0);
}

#include <stdio.h>
int     main()
{
    printf("%i", ft_isprint('\n'));
}

