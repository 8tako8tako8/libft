#include "libft.h"
#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
	//if (argc == 4)
		//printf("%s\n%s", ft_strnstr(argv[1], argv[2], (size_t)argv[3]), strnstr(argv[1], argv[2], (size_t)argv[3]));
		printf("%s:%s\n", ft_strnstr(argv[1], argv[2], 0), strnstr(argv[1], argv[2], 0));
		printf("%s:%s\n", ft_strnstr(argv[1], argv[2],2), strnstr(argv[1], argv[2], 2));
		printf("%s:%s\n", ft_strnstr(argv[1], argv[2], 10), strnstr(argv[1], argv[2], 10));
	return (0);
}
