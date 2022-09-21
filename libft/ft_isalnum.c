/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:12:21 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/09/21 17:20:25 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_isalnum.h"
#include "ft_isalpha.h"
#include "ft_isdigit.h"

int	ft_isalnum(int c)
{
	if(ft_isalpha(c) || ft_isdigit(c))
		return (8);
	return (0);
}
