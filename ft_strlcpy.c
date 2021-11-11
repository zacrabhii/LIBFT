/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:02:02 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/11 15:38:04 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
isize_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
		size_t i;
		size_t j;	

		i = ft_strlen(src);
		while(src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		return(i);
}


