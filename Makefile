all:

printf:
	@cp -r ../Second\ Ring/printf .
	@gcc printftester.c printf/*.c
	@./a.out

fclean:
	@rm -rf printf a.out

.PHONY: all printf fclean