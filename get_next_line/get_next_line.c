/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:21:16 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/10/31 12:04:37 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	get_next_line(int fd)
{
	char		*buf;
	t_size_t	size;

	size = 5;
	buf = malloc(size * sizeof(char));
	while (!read(fd, buf, size))
	{

	}
}
