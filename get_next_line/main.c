/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:36:17 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2023/01/29 13:44:15 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		i;
	char	*str;

	i = open("README.md", O_RDONLY);
	printf("\n");
	while (1)
	{
		str = get_next_line(i);
		printf("%s", str);
		if (!str)
			break ;
	}
	close(i);
	return (0);
}
