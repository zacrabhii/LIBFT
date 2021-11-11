/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:37:09 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/11 13:57:16 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_find(char const *str, char c)
{
	int i;
	
	i = 0;
	while(str[i]) 
	{
		if(str[i] == c)
			return (1);
	i++;
	}
	return(0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *str;
	int i;
	int start;
	int end;
	int len;

	i = 0;
	start = i;
	while(s1[start] && ft_find(set, s1[start]) == 1)
		start++;
	end = ft_strlen(s1) - 1;
	while(s1[end] && ft_find(set, s1[end]) == 1)
			end--;
	if(start > end)
		len = 1;
	len = (end - start) + 1;
	if(!(str = (char *)malloc(sizeof(char) *len)))
			return(NULL);
	while(start <= end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return(str);
}
