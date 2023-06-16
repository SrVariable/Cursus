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

	// BASIC TEST
	printf("%sog chartest value:%s %d\n", T_YELLOW, RESET, printf("c: %c\n", '0'));
	printf("%smy chartest value:%s %d\n\n", T_CYAN, RESET, ft_printf("c: %c\n", '0'));
	printf("%sog stringtest value:%s %d\n", T_YELLOW, RESET, printf("s: %s\n", stringtest));
	printf("%smy stringtest value:%s %d\n\n", T_CYAN, RESET, ft_printf("s: %s\n", stringtest));
	printf("%sog dnumtest value:%s %d\n", T_YELLOW, RESET, printf("d: %d\n", dinumtest));
	printf("%smy dnumtest value:%s %d\n\n", T_CYAN, RESET, ft_printf("d: %d\n", dinumtest));
	printf("%sog inumtest value:%s %d\n", T_YELLOW, RESET, printf("i: %i\n", dinumtest));
	printf("%smy inumtest value:%s %d\n\n", T_CYAN, RESET, ft_printf("i: %i\n", dinumtest));
	printf("%sog unumtest value:%s %d\n", T_YELLOW, RESET, printf("u: %u\n", unumtest));
	printf("%smy unumtest value:%s %d\n\n", T_CYAN, RESET, ft_printf("u: %u\n", unumtest));
	printf("%sog adresstest value:%s %d\n", T_YELLOW, RESET, printf("p: %p\n", adresstest));
	printf("%smy adresstest value:%s %d\n\n", T_CYAN, RESET, ft_printf("p: %p\n", adresstest));
	printf("%sog hextest value:%s %d\n", T_YELLOW, RESET, printf("x: %x\n", hextest));
	printf("%smy hextest value:%s %d\n\n", T_CYAN, RESET, ft_printf("x: %x\n", hextest));
	printf("%sog HEXtest value:%s %d\n", T_YELLOW, RESET, printf("X: %X\n", hextest));
	printf("%smy HEXtest value:%s %d\n\n", T_CYAN, RESET, ft_printf("X: %X\n", hextest));
	printf("%sog %%test value:%s %d\n", T_YELLOW, RESET, printf("%%: %%\n"));
	printf("%smy %%test value:%s %d\n\n", T_CYAN, RESET, ft_printf("%%: %%\n"));

	return (0);
}
