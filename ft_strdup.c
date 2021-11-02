#include <string.h>
#include <stdlib.h>
int ft_strlen(char *str)
{
    int i;
    while(str[i])
        i++;
    return (i);
}

char    *ft_strdup(const char *s1)
{
    char *src;
    int i;
	int len;

    i = 0;
	len = ft_strlen(s1);
    if (!(src = (char *)malloc(sizeof(const char *) * len + 1)))
			return (NULL);
	src[len] = '\0';
	while(s1[i])
	{
		src[i] = s1[i];
		i++;
	}
	return (src);
}
#include <stdio.h>
int main()
{
	printf("%s", ft_strdup(""));
}
