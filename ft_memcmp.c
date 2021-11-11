#include <string.h>
#include <stdlib.h>
//#include "libft.h"
int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;
 	unsigned char *str = (unsigned char *) s1;
	unsigned char  *src = (unsigned char *)s2;
    while(str[i] == src[i] && i < n)
        i++;
    //return ( ((unsigned char *)s2+i) - ((unsigned char *)s1+i) );
	return((str[i] - src[i]));
}

#include <stdio.h>
int main()
{
    printf("%d\n", ft_memcmp("halla", "halla", 2));
    printf("%d", memcmp("halla", "halla", 2));
}
