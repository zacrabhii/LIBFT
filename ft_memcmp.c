#include <string.h>
#include <stdlib.h>
int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;
    while( ((unsigned char *)s1+i) && ((unsigned char *)s2+i) && i < n)
        i++;
    return ( ((unsigned char *)s2+i) - ((unsigned char *)s1+i) );
}
#include <stdio.h>
int main()
{
    printf("%d\n", ft_memcmp("halla", "hella", 2));
    printf("%d", memcmp("halla", "hella", 2));
}
