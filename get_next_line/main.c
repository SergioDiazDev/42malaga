/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:36:17 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2023/02/01 17:30:28 by sdiaz-ru         ###   ########.fr       */
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
	printf("\n--------------------------------------------------------------\n");
	while (1)
	{
		str = get_next_line(i);
		printf("%s", str);
		if (!str)
			break ;
		free(str);
	}
	printf("\n--------------------------------------------------------------\n");
	close(i);
	free(str);
	system("leaks a.out");
	return (0);
}
