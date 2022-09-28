/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:49:45 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/09/28 17:22:20 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//ft_isalpha.h
int		ft_isalpha(int c);
int		ft_isdigit(int c);
//ft_isdigit.h
int		ft_isdigit(int c);
//ft_isalnum.h
int		ft_isalnum(int c);
//ft_isascii.h"
int		ft_isascii(int c);
//ft_isprint.h
int		ft_isprint(int c);
//ft_strlen.h
int		ft_strlen(const char *str);
//ft_memset
typedef int	t_size_t;
void	*ft_memset(void *str, int c, t_size_t n);
//ft_bzero
void	ft_bzero(void *s, t_size_t n);
//ft_memcpy
void	*ft_memcpy(void *dest, const void *src, t_size_t n);
//ft_memmove
void	*ft_memmove(void *str1, const void *str2, t_size_t n);
//ft_strlcpy
//char	ft_strlcpy(char *dest, const char *src, t_size_t size);

#endif