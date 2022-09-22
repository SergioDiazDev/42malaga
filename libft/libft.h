/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:49:45 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/09/22 13:18:47 by sdiaz-ru         ###   ########.fr       */
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
int		ft_strlen(char *str);
//ft_memset
typedef int	t_size_t;
void	*ft_memset(void *str, int c, t_size_t n);

#endif