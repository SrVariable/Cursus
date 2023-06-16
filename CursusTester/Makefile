FLAGS = -Wall -Wextra -Werror

all:
	@echo make [ printf ]	

printf:
	@cp -r ../Second\ Ring/printf .
	@gcc $(FLAGS) printftester.c printf/*.c -o printftest
	@./printftest

fclean:
	@rm -rf printf printftest
	@clear

.PHONY: all printf fclean