/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:49:45 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/10/04 21:10:47 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//ft_isalpha.h
int			ft_isalpha(int c);
int			ft_isdigit(int c);
//ft_isdigit.h
int			ft_isdigit(int c);
//ft_isalnum.h
int			ft_isalnum(int c);
//ft_isascii.h"
int			ft_isascii(int c);
//ft_isprint.h
int			ft_isprint(int c);
//ft_memset
typedef int	t_size_t;
void		*ft_memset(void *str, int c, t_size_t n);
//ft_strlen.h
t_size_t	ft_strlen(const char *str);
//ft_bzero
void		ft_bzero(void *s, t_size_t n);
//ft_memcpy
void		*ft_memcpy(void *dest, const void *src, t_size_t n);
//ft_memmove
void		*ft_memmove(void *str1, const void *str2, t_size_t n);
//ft_strlcpy
t_size_t	ft_strlcpy(char *dest, const char *src, t_size_t size);
//ft_strlcat
t_size_t	ft_strlcat(char *dest, const char *src, t_size_t size);
//ft_toupper
int			ft_isupper(int c);
int			ft_toupper(int c);
//ft_tolower
int			ft_islower(int c);
int			ft_tolower(int c);
//ft_strchr
char		*ft_strchr(const char *str, int c);
//ft_strrchr
char		*ft_strrchr(const char *str, int c);
//ft_strncmp
int			ft_strncmp(const char *str1, const char *str2, t_size_t n);
//ft_memchr
void		*ft_memchr(const void *str, int c, t_size_t n);
//ft_memcmp
int			ft_memcmp(const void *str1, const void *str2, t_size_t n);
//ft_strnstr
char		*ft_strnstr(const char *big, const char *little, t_size_t len);
//ft_atoi
int			ft_atoi(const char *str);

#endif