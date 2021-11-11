/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:13:08 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/07 15:56:45 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int		ft_atoi(const char *str)
{
		int i;
		int negative;
		int result;

		i = 0;
		negative =1;
		result = 0;
		while(str[i] == ' ' || str[i] == '\t')
				i++;
		if(str[i] == '+' || str[i] == '-')
			{
				if(str[i] == '-')
					negative *=-1;
			i++;
			}
		while(str[i] >= '0' &&  str[i] <= '9')
			{
			result = result * 10 + (str[i] - 48);
			i++;
			}
	return (result *negative);
}
#include <stdlib.h>
int main()
{
	printf("\t%d", ft_atoi("    +-12345hello"));
	printf("\n%d", atoi("    +-1234hello"));
}

