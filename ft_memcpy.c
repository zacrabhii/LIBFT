#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void    *ft_memcpy(void *restrict dst, const void *restrict src ,  size_t n)
{
    size_t i;

    i = 0;
    //dst = (!(unsigned char *)malloc(
    while (i < n)
        {
            *((unsigned char *)dst+i) = *((unsigned char *)src+i);
            i++;
        }
        return (dst);
}
#include <stdio.h>
int main()
{
    char *dst;

    dst = malloc(4);
    printf("%s", ft_memcpy(dst, "heyjames", 2));
    char str[5];
    printf("\n%s", memcpy(str, "heyjames", 3));
}
