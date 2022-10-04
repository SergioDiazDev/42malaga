/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:47:57 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/10/04 17:54:11 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	t_size_t	size;

	size = ft_strlen(str);
	while (0 <= size)
	{
		if (str[size] == c)
			return ((char *)(str + size));
		size--;
	}
	return (0);
}
