/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:59:33 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/11 14:00:16 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int		count(long c)
{
	int  count;
	
	count = 0;
	while(count >= 0 && count <= 9)
		{
			while( c != 0)
				{
					c /=10;
					count++;
				}
		return (count);
		}
}
char 	*ft_itoi(int c)
{
	long i;
	long nb;
	char *str;

	nb = c;
	i = count(nb);
	if(!(str =(char *)malloc(sizeof(char) * i + 1)))
			return (NULL);
	str[i--] = '\0';
	if(nb < 0)
	{
		str[i] = '-';
		nb = nb * -1;
	}
	if(nb == 0)
	{
		str[0] = 0;
		return (str);
	}
	while(nb > 0)
	{
		str[i] = 48 + (nb %10);
		nb /= 10;
		i--;
	}
	return(str);
}
int main()
{
	printf("%d\n", count(10));
	printf("\n%s", ft_itoi(-45414748));
}
