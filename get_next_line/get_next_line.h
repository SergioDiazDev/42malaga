/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 10:56:13 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/12/10 10:56:13 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE (42)
# endif

# include <unistd.h>
# include <stdlib.h>

typedef unsigned long	t_size_t;

void	ft_bzero(void *s, t_size_t n);
void	*ft_calloc(t_size_t nmemb, t_size_t size);
int		ft_strlen(char *str);
char	*ft_free(void *ptr, void *ptr2);
char	*ft_my_split(char *buf, int find_nl, char *static_line, int count_read);
char	*get_next_line(int fd);

#endif
