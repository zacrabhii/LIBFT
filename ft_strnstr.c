/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:01:49 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/02 09:33:22 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if(to_find[j] == '\0')
		return(str);
	while(str[i] != '\0' && i < n)
		{
			while(to_find[j] == str[i + j] )
			{
				if(to_find[j + 1] == '\0')
					return(str + i);
			j++;
			}
		i++;
		}
	return (NULL);
}
int main()
{
	//char str[11] = "hello world";

	//printf("%s", ft_strnstr("", "", 5));
	printf("%s", strnstr("", "", 5));

}
