/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:25:33 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/10 17:49:12 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
	int 	ft_islapha(int c);
	int 	ft_isdigit(int c);
	int 	ft_isascii(int c);
	int 	ft_isprint(int c);
	void	ft_bzero(void *s, size_t n);
	int		ft_atoi(const char *str);
	char	*ft_itoa(int c);
	char	*ft_strchr(const char *s, int c);
	char	*ft_strrchr(const char *s, int c);
	void	*ft_memchr(const void *s, int c , size_t n);
	int		ft_memcmp(const void *s1, const void *s2, size_t n);
	void	*ft_memcpy(void  *dst, const void *src, size_t n);
	size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
	void	*ft_calloc(size_t count, size_t size);
	char	*ft_strtrim(char const *s1, char const *set);
	void	ft_putchar_fd(char c, int fd);
	void	ft_putstr_fd(char *s, int fd);
	void	ft_putendl_fd(char *s, int fd);
	void	ft_putnbr(int n, int fd);

	int		ft_strlen(char const *str);
	char	*ft_strjoin(char const  *s1, char const *s2);
	size_t	ft_strlcat(char	*dst, const char *src, size_t dstzie);
#endif
	

