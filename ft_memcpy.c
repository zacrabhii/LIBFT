#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void    *ft_memcpy(void *restrict dst, const void *restrict src ,  size_t n)
{
    size_t i;

    i = 0;
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
    char dst[7] = "heyjame";
    printf("%s", ft_memcpy(dst, "heywarle", 6));
    char str[4] = "heyjames";
	//printf("%s", str);
    memcpy(str, "heyjames", 3);
	printf("\n%s", str);
}
