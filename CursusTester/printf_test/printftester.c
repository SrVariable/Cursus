#include <stdio.h>
#include "../printf/ft_printf.h"
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

	// ADVANCED TEST
	printf("%sog test1 value:%s %d\n", T_YELLOW, RESET, printf("%c%c%c%c %s %c%c%s\n", 'T', 'h', 'i', 's', "is the", 's', 't', "ring"));
	printf("%smy test1 value:%s %d\n\n", T_CYAN, RESET, ft_printf("%c%c%c%c %s %c%c%s\n", 'T', 'h', 'i', 's', "is the", 's', 't', "ring"));
	printf("%sog test2 value:%s %d\n", T_YELLOW, RESET, printf("%c%c%c%c %s %c%c%s%c%s%c%c%s%s%d%s%d\n", 'T', 'h', 'i', 's', "is the", 's', 't', "ring", ' ', "with ", 'n', 'u', "m", "bers:\nINT_MIN: ", (int)-2147483648, "\nINT_MAX: ", 2147483647));
	printf("%smy test2 value:%s %d\n\n", T_CYAN, RESET, ft_printf("%c%c%c%c %s %c%c%s%c%s%c%c%s%s%d%s%d\n", 'T', 'h', 'i', 's', "is the", 's', 't', "ring", ' ', "with ", 'n', 'u', "m", "bers:\nINT_MIN: ", (int)-2147483648, "\nINT_MAX: ", 2147483647));
	printf("%sog test3 value:%s %d\n", T_YELLOW, RESET, printf("%u, %u, %x, %x, %X, %X, %d, %d, %c, %c, %c, %s, %p%c", -1, -200213, -125125, -2131231, -58213, -42, 42, 42, -1, -42, -27, iamnull, iamnull, '\n'));
	printf("%smy test3 value:%s %d\n\n", T_CYAN, RESET, ft_printf("%u, %u, %x, %x, %X, %X, %d, %d, %c, %c, %c, %s, %p%c", -1, -200213, -125125, -2131231, -58213, -42, 42, 42, -1, -42, -27, iamnull, iamnull, '\n'));
	printf("%sog 42test value:%s %d\n", T_YELLOW, RESET, printf("OMG 42 characters!!! %c%s%d%i%u%p%x%X%%42\n", 42, "42", 42, 42, 42, (void *)42, 42, 42));
	printf("%smy 42test value:%s %d\n\n", T_CYAN, RESET, ft_printf("OMG 42 characters!!! %c%s%d%i%u%p%x%X%%42\n", 42, "42", 42, 42, 42, (void *)42, 42, 42));
	
	printf("%sOk... It seems that you are copying me...%s\n", T_YELLOW, RESET);
	ft_printf("%sOk... It seems that you are copying me...%s\n\n", T_CYAN, RESET);


	// MIX TEST
	printf("%sLet's start with og mix:%s %d\n", T_YELLOW, RESET, printf("%c%s%d%i%u%p%p%p%x%X%X%d%u%i%p%s%%%d%s\n", 'T', "his ", 42, 2003, (unsigned int)4294967295, "hey", "this is a test", "of %%p", 0x0, 0xFFFF, 0x123456AF, 1, 3, 2023, &chartest, " seems fine", 2147483647, "you got it!"));
	printf("%sLet's start with my mix:%s %d\n", T_CYAN, RESET, ft_printf("%c%s%d%i%u%p%p%p%x%X%X%d%u%i%p%s%%%d%s\n", 'T', "his ", 42, 2003, (unsigned int)4294967295, "hey", "this is a test", "of %%p", 0x0, 0xFFFF, 0x123456AF, 1, 3, 2023, &chartest, " seems fine", 2147483647, "you got it!"));

	return (0);
}
