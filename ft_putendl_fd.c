/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:47:47 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/09 11:51:02 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_putendl_fd(char *s, int fd)
{
	int i;
	while(s[i])
		write(fd, &s[i++], 1);
	write(fd, "\n", 1);
}
