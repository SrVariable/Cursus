#include <stdio.h>
#include "../libft/files/libft.h"
#include <ctype.h>

int	main(void)
{
	printf("   isalpha: %d %d %d %d %d %d\n", isalpha('a') != 0, isalpha(10) != 0, isalpha('3') != 0, isalpha(-214748) != 0, isalpha('Z') != 0, isalpha(42) != 0);
	printf("ft_isalpha: %d %d %d %d %d %d\n\n", ft_isalpha('a') != 0, ft_isalpha(10) != 0, ft_isalpha('3') != 0, ft_isalpha(-214748) != 0, ft_isalpha('Z') != 0, ft_isalpha(42) != 0);

	printf("   isdigit: %d %d %d %d %d %d\n", isdigit('a') != 0, isdigit(10) != 0, isdigit('3') != 0, isdigit(-214748) != 0, isdigit('Z') != 0, isdigit(42) != 0);
	printf("ft_isdigit: %d %d %d %d %d %d\n\n", ft_isdigit('a') != 0, ft_isdigit(10) != 0, ft_isdigit('3') != 0, ft_isdigit(-214748) != 0, ft_isdigit('Z') != 0, ft_isdigit(42) != 0);

	printf("   isalnum: %d %d %d %d %d %d\n", isalnum('a') != 0, isalnum(10) != 0, isalnum('3') != 0, isalnum(-214748) != 0, isalnum('Z') != 0, isalnum(42) != 0);
	printf("ft_isalnum: %d %d %d %d %d %d\n\n", ft_isalnum('a') != 0, ft_isalnum(10) != 0, ft_isalnum('3') != 0, ft_isalnum(-214748) != 0, ft_isalnum('Z') != 0, ft_isalnum(42) != 0);

	printf("   isascii: %d %d %d %d %d %d\n", isascii('a') != 0, isascii(10) != 0, isascii('3') != 0, isascii(-214748) != 0, isascii('Z') != 0, isascii(42) != 0);
	printf("ft_isascii: %d %d %d %d %d %d\n\n", ft_isascii('a') != 0, ft_isascii(10) != 0, ft_isascii('3') != 0, ft_isascii(-214748) != 0, ft_isascii('Z') != 0, ft_isascii(42) != 0);

	printf("   isprint: %d %d %d %d %d %d\n", isprint('a') != 0, isprint(10) != 0, isprint('3') != 0, isprint(-214748) != 0, isprint('Z') != 0, isprint(42) != 0);
	printf("ft_isprint: %d %d %d %d %d %d\n", ft_isprint('a') != 0, ft_isprint(10) != 0, ft_isprint('3') != 0, ft_isprint(-214748) != 0, ft_isprint('Z') != 0, ft_isprint(42) != 0);
}