int     toupper(int c)
{
    if (c >= 97 && c <= 122)
    {
        c -= 32;
    }
    return (c);
}

#include <stdio.h>
int main()
{
    int     p;

    p = 98;
    printf("%c\n", toupper(p));
    return (0);
}