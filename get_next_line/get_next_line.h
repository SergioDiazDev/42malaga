/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:21:14 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/10/31 12:40:10 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>

typedef unsigned long	t_size_t;
char	get_next_line(int fd);
void	*ft_calloc(t_size_t nmeb, t_size_t size);
void	*realloc(void *ptr, size_t size);

#endif