/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:25:10 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/11 14:39:11 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include "libft.h"
#include <string.h>
int ft_strlen(const  char *str)
{
	int i;
	i =0;
	while(str[i])
		i++;
	return(i);
}
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t n;

	n = dstsize;
	i = ft_strlen(src);
	j = ft_strlen(dst);
	if(n == 0 || j > n)
		return(i + n);
	while(dst[j])
		j++;
	i = 0;
	while(src[i] &&  j + i < n - 1)	
	{
		dst[j + i] = src[i];
		i++;
	
	}
	dst[j + i] = '\0';
	printf("%s", dst);
	return(j + ft_strlen(src));
}
int main()
{
	char t[] = "hello";
	printf("%zu" , ft_strlcat(t, " james" , 12));
}


