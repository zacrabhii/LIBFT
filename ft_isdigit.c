#include <ctype.h>
int ft_isdigits(int c)
{
    if(c <= '0' || c >= '9')
        return (1);
    return (0);
}
#include <stdio.h>
int main()
{ 
    printf("%d", ft_isdigits('48'));
}
