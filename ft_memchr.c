/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 21:35:37 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/07 18:34:26 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
void 	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	
	i = 0;
	while(((char *)s)[i] && i < n)
	{
		if(((char *)s)[i] == c)
			return(((char *)s + i));
		i++;
	}
	return (0);
}
int main()
{
	printf("%s", ft_memchr("www1335.ma", 53, 10));
	printf("\n\n%s", memchr("www1335.ma", 53, 10));
}
