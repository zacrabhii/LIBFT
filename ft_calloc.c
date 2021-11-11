/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:48:43 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/08 14:14:49 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
void	*ft_calloc(size_t count, size_t size)
{
	char *str;

	str = malloc(sizeof(char ) * (count * size));
	if(!str)
		return(NULL);
	ft_bzero(str, (count*size));
	return(str);
}	
								
