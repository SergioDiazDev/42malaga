#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int	i;
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
}