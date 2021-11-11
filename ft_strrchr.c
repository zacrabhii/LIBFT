/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:17:50 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/07 18:15:36 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int 	ft_strlen(char *str)
{
	int i;
	
	i= 0;
	while(str[i])
		i++;
	return(i);
}
char 	*ft_strrchr(const char *s, int c)
{
	if( c == '\0')
		return(NULL);
	int len;

	len = 0;
	len= ft_strlen(((char *)s));

   	while(s[--len]) 
		{
			if(s[len] == c)	
				return(((char *)s + len));
		}
	return (0);
}
int main()
{
printf("first string : %s", ft_strrchr("www.1337.ma", '\0'));
printf("\nsecond string : %s\n", strrchr("ww.1337.ma", '\0'));
}


