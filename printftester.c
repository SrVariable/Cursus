#include <stdio.h>
#include "printf/ft_printf.h"

int	main(void)
{
	char			chartest = 42;
	char			*stringtest = "Probando el string";
	int				dinumtest = -2147483648;
	unsigned int	unumtest = 0xFFFFFFFF;
	int				hextest = 0xFFFF;
	char			*adresstest = "Probando el adress";

	printf("\033[1;33mValores printf original\033[0m\n");
	printf("\033[34mchartest value:\033[0m %d\n", printf("c: %c\n", '0'));
	printf("\033[34mstringtest value:\033[0m %d\n", printf("s: %s\n", stringtest));
	printf("\033[34mdnumtest value:\033[0m %d\n", printf("d: %d\n", dinumtest));
	printf("\033[34minumtest value:\033[0m %d\n", printf("i: %i\n", dinumtest));
	printf("\033[34munumtest value:\033[0m %d\n", printf("u: %u\n", unumtest));
	printf("\033[34madresstest value:\033[0m %d\n", printf("p: %p\n", adresstest));
	printf("\033[34mhextest value:\033[0m %d\n", printf("x: %x\n", hextest));
	printf("\033[34mHEXtest value:\033[0m %d\n", printf("X: %X\n", hextest));
	printf("\033[34m%%test value:\033[0m %d\n", printf("%%: %%\n"));

	printf("\033[1;33mValores mi printf\033[0m\n");
	printf("\033[34mchartest value:\033[0m %d\n", ft_printf("c: %c\n", '0'));
	printf("\033[34mstringtest value:\033[0m %d\n", ft_printf("s: %s\n", stringtest));
	printf("\033[34mdnumtest value:\033[0m %d\n", ft_printf("d: %d\n", dinumtest));
	printf("\033[34minumtest value:\033[0m %d\n", ft_printf("i: %i\n", dinumtest));
	printf("\033[34munumtest value:\033[0m %d\n", ft_printf("u: %u\n", unumtest));
	printf("\033[34madresstest value:\033[0m %d\n", ft_printf("p: %p\n", adresstest));
	printf("\033[34mhextest value:\033[0m %d\n", ft_printf("x: %x\n", hextest));
	printf("\033[34mHEXtest value:\033[0m %d\n", ft_printf("X: %X\n", hextest));
	printf("\033[34m%%test value:\033[0m %d\n", ft_printf("%%: %%\n"));
	printf("\033[34mhextest value:\033[0m %d\n", ft_printf("x1: %x x2: %x x3: %x x4: %x x5: %x\n x6: %x x7: %x x8: %x x9: %x x10: %x\n", -1, -9, -10, -11, -14, -15, -16, -99, -100, -101));
	printf("\033[34mhextest value:\033[0m %d\n", printf("x1: %x x2: %x x3: %x x4: %x x5: %x\n x6: %x x7: %x x8: %x x9: %x x10: %x\n", -1, -9, -10, -11, -14, -15, -16, -99, -100, -101));
	
	printf("\033[1;33mMore address testers\033[0m\n");
	printf("\033[34mstringtest/address value:\033[0m %d\n", printf("p: %p\n", stringtest));
	printf("\033[34mstringtest/address value:\033[0m %d\n", ft_printf("p: %p\n", stringtest));

	return (0);
}