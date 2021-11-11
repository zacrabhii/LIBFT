/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:08:08 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/10 21:16:50 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *str;
	size_t n = len;

	i = 0;
	if(!(str = (char *)malloc(sizeof(char *) * n + 1)))
			return (NULL);
	str[n] = '\0';
	int  check = 1;
	while(s[i] && i < n)
		{
			str[i] = s[start + i - check];
			i++;
		}
	return(str);
}
int main()
{
	printf("%s", ft_substr("hello1 world" , 5, 7));
}
