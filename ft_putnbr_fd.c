/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:16:03 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/11 13:59:11 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
void 	ft_putnbr_fd(int n, int fd)
{
		long nb;
		int i;
		long result;
		char *str;

		nb  = n;
		if( nb < 0)	
		{
			ft_putchar_fd('-', 1);
			nb = nb * -1;
		}
		if(nb == 0)
		{
			ft_putchar_fd('0', 1);
		}
	while(nb)
		{
			str[i] = (nb % 10) + '0';
			nb= nb/10;
			i++;
		}
		write(fd, &str+i, 1);i 
}
		
