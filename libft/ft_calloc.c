/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:55:25 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/10/07 12:16:51 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(t_size_t nmemb, t_size_t size)
{
	void	*aux;

	if (nmemb == 0 || size == 0)
		return (0);
	aux = malloc(nmemb * size);
	ft_memset(aux, 0, nmemb);
	return (aux);
}
