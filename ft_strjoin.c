/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:17:59 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/10 21:17:04 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
char	*ft_strcat(char *dst, char  *src)
{
	size_t i;
	size_t j;

	j =  0;
	while(dst[j])
		j++;
	i = 0;
	while(src[i])
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return(dst);
}
char	*ft_strcpy(char *s1, char  const *s2)
{
	size_t i;
	i = 0 ;
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	return(s1);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t i;
	size_t j;
	size_t len;
	char *str;

	len = ft_strlen(s1) + ft_strlen(s2);
	if(!(str = (char *)malloc(sizeof(char ) * (len + 1))))
				return (NULL);
//	str[len] = '\0';
//	ft_strcpy(str, s1);
//	ft_str`py(str, s2);	
	i = 0;
	while(s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while(s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	return(str);
}

										
