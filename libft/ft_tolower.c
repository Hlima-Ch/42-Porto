int     tolower(int c)
{
    if (c >= 65 && c <= 90)
        c += 32;
    return (c);
}

#include <stdio.h>
int main()
{
    int     p;

    p = 68;
    printf("%c\n", tolower(p));
    return (0);
}