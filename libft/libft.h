/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:49:45 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/10/13 10:06:09 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
//ft_isalpha.h
int			ft_isalpha(int c);
//int			ft_isdigit(int c);
//ft_isdigit.h
int			ft_isdigit(int c);
//ft_isalnum.h
int			ft_isalnum(int c);
//ft_isascii.h"
int			ft_isascii(int c);
//ft_isprint.h
int			ft_isprint(int c);
//ft_memset
typedef unsigned long	t_size_t;
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
//int			ft_isupper(int c);
int			ft_toupper(int c);
//ft_tolower
//int			ft_islower(int c);
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
//ft_calloc
void		*ft_calloc(t_size_t nmemb, t_size_t size);
//ft_strdup
char		*ft_strdup(const char *s);
//ft_substr
// Reserva (con malloc(3)) y devuelve una substring de
// la string ’s’.
// La substring empieza desde el índice ’start’ y
// tiene una longitud máxima ’len’.
char		*ft_substr(char const *s, unsigned int start, t_size_t len);
//ft_strjoin
// Reserva (con malloc(3)) y devuelve una nueva
// string, formada por la concatenación de ’s1’ y
// ’s2’.
char		*ft_strjoin(char const *s1, char const *s2);
//ft_strtrim
// Elimina todos los caracteres de la string ’set’
// desde el principio y desde el final de ’s1’, hasta
// encontrar un caracter no perteneciente a ’set’. La
// string resultante se devuelve con una reserva de
// malloc(3)
char		*ft_strtrim(char const *s1, char const *set);
//ft_split
// Reserva (utilizando malloc(3)) un array de strings
// resultante de separar la string ’s’ en substrings
// utilizando el caracter ’c’ como delimitador. El
// array debe terminar con un puntero NULL.
char		**ft_split(char const *s, char c);

#endif