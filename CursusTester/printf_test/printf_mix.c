#include <stdio.h>
#include "../printf/files/ft_printf.h"
#include "../colors.h"

int	main(void)
{
	char			chartest = 42;
	char			*stringtest = "Testing string";
	int				dinumtest = -2147483648;
	unsigned int	unumtest = 0xFFFFFFFF;
	int				hextest = 0xFFFF;
	char			*adresstest = "Testing address";
	char			*iamnull = NULL;

	// MIX TEST
	printf("%sog mix value:%s %d\n", T_YELLOW, RESET, printf("%c%s%d%i%u%p%p%p%x%X%X%d%u%i%p%s%%%d%s\n", 'T', "his ", 42, 2003, (unsigned int)4294967295, "hey", "this is a test", "of %%p", 0x0, 0xFFFF, 0x123456AF, 1, 3, 2023, &chartest, " seems fine", 2147483647, "you got it!"));
	printf("%smy mix value:%s %d\n", T_CYAN, RESET, ft_printf("%c%s%d%i%u%p%p%p%x%X%X%d%u%i%p%s%%%d%s\n", 'T', "his ", 42, 2003, (unsigned int)4294967295, "hey", "this is a test", "of %%p", 0x0, 0xFFFF, 0x123456AF, 1, 3, 2023, &chartest, " seems fine", 2147483647, "you got it!"));

	return (0);
}
