/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:09:29 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/11 16:36:38 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int		ft_strlen(const char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

void	*ft_memmove(void *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	i = ft_strlen(src);
	while(i < len)
	{
		((char *)dst)[i] = src[i];
		i--;
	}
	printf("%s", dst);
	return ((char *)dst);
}

int main()
{
	char dst[6] = "";
	printf("my fucnction 0.: %s\n", ft_memmove(dst, "hey james", 7));
	char str[6] = "ll";
	printf("\n%s", memmove(str, "hey james", 6));
}
