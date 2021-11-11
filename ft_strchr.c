/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:16:22 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/07 16:01:07 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if(c == '\0')
		return(NULL);
	while(s[i])
	{
		if(s[i] == c)
			return(((char *)s + i));
		i++;
	}
	return (0);
}
int main()
{
	printf("%s", ft_strchr("hey james ho are you", 'w'));
	printf(">>>>>%s", strchr("hey james ho are you", 'w'));
}

