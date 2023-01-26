/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:36:17 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2023/01/26 12:36:41 by sdiaz-ru         ###   ########.fr       */
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
	str = get_next_line(i);
	printf("1-%s\n", str);
	str = get_next_line(i);
	printf("2-%s\n", str);
	str = get_next_line(i);
	printf("3-%s\n", str);
	str = get_next_line(i);
	printf("4-%s\n", str);
	str = get_next_line(i);
	printf("5-%s\n", str);
	str = get_next_line(i);
	printf("6-%s\n", str);
	str = get_next_line(i);
	printf("7-%s\n", str);
	str = get_next_line(i);
	printf("8-%s\n", str);
	str = get_next_line(i);
	printf("9-%s\n", str);
	close(i);
	return (0);
}
