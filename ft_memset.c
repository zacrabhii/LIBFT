/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:05:01 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/07 18:36:52 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;

	i = 0;
	while(i < len)
		{
				((unsigned char *)b)[i] = ((unsigned char)c);
					i++;
		}
	return(b);
}

/*int main()
{
	char dst[11] = "hello world";
	 ft_memset(dst, 'h', 13);
	printf("\n%s\n", dst);
	char s[11] = "hello world";
	memset(s, 'h', 13);
	printf("\n%s", s);
	
	i


}*/
