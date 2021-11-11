/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:02:09 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/07 16:11:08 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while(s1[i] && s2[i] && s1[i] == s2[i] && i < n )
		i++;
	return((s2[i] - s1[i]));
}
int main()
{
	printf("%d", ft_strncmp("hellp", "hello", 5));
}
