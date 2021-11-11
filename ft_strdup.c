/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:32:13 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/07 18:33:21 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
char    *ft_strdup(const char *s1)
{
    char *src;
    int i;
	int len;

    i = 0;
	len = ft_strlen(s1);
    if (!(src = (char *)malloc(sizeof(const char *) * len + 1)))
			return (NULL);
	src[len] = '\0';
	while(s1[i])
	{
		src[i] = s1[i];
		i++;
	}
	return (src);
}
