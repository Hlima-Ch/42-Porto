#include <stddef.h>
#include <stdio.h>
#include <string.h>
size_t     ft_strlen(const char *s);

void *ft_memmove(void *dst, const void *src, size_t len)
{
char *prt_dst;
const char *prt_src;
char  temp[len];
int c;

c = 0;
prt_dst = (char*)dst;
prt_src = (const char *)src;
while (c < len)
{
    temp[c] = prt_src[c];
    c++;
}
c = 0;
while (len)
{
    prt_dst[c] = temp[c];
    len--;
    c++;
}
 return (dst);
}
/* 
int main()
{
    char    a[100] = "heitor limaaaaaaa";

    ft_memmove(a + 3, a, 5);
    printf("%s", a);
}
*/