# ---------------------------------------------------------------------
# Colors

# Text color
T_BLACK = \033[30m
T_RED = \033[31m
T_GREEN = \033[32m
T_YELLOW = \033[33m
T_BLUE = \033[34m
T_MAGENTA = \033[35m
T_CYAN = \033[36m
T_WHITE = \033[37m

# Text style
BOLD = \033[1m
ITALIC = \033[3m
UNDERLINE = \033[4m
STRIKETHROUGH = \033[9m

# Background color
B_BLACK = \033[40m
B_RED = \033[41m
B_GREEN = \033[42m
B_YELLOW = \033[43m
B_BLUE = \033[44m
B_MAGENTA = \033[45m
B_CYAN = \033[46m
B_WHITE = \033[47m

# Reset everything
RESET = \033[0m

# ---------------------------------------------------------------------
# Library names

PRINTF_NAME = libftprintf.a

# ---------------------------------------------------------------------
# Strict flags

FLAGS = -Wall -Wextra -Werror

# ---------------------------------------------------------------------
# File paths

PRINTF_OLD_PATH = ../Second\ Ring/printf
PRINTF_NEW_PATH = ./printf

# ---------------------------------------------------------------------
# C Files

PRINTF_FILES = $(PRINTF_NEW_PATH)/files/ft_printf.c \
				$(PRINTF_NEW_PATH)/files/ft_putchar.c \
				$(PRINTF_NEW_PATH)/files/ft_putnbr.c

# ---------------------------------------------------------------------
# Object Files

PRINTF_OBJS = $(PRINTF_FILES:.c=.o)

# ---------------------------------------------------------------------
# Main target

all:
	@echo "Use $(BOLD)make $(T_YELLOW)[ libft | printf ]$(RESET)"

# ---------------------------------------------------------------------
# Macros

# Libft

#### TO DO

# Printf

$(PRINTF_NAME): $(PRINTF_OBJS)
	@ar rcs $(PRINTF_NAME) $(PRINTF_OBJS)
	@mv $(PRINTF_NEW_PATH)/files/*.o $(PRINTF_NEW_PATH)/obj
	@echo "$(BOLD)$(T_GREEN)SUCCESS:$(RESET) $(PRINTF_NAME) created"
	@echo "Use $(BOLD)make $(T_YELLOW)[ printf_test1 | printf_test2 ]$(RESET)"


$(PRINTF_OBJS): mk_printf_obj $(PRINTF_FILES)
	@gcc $(FLAGS) -c $(PRINTF_FILES)
	@mv *.o $(PRINTF_NEW_PATH)/files

# ---------------------------------------------------------------------
# Targets

# Libft

#### TO DO

# Printf

printf: $(PRINTF_NAME)

cp_printf:
	@mkdir -p $(PRINTF_NEW_PATH)
	@mkdir -p $(PRINTF_NEW_PATH)/files
	@cp -r $(PRINTF_OLD_PATH)/ft_* $(PRINTF_NEW_PATH)/files

mk_printf_obj: cp_printf
	@rm -rf $(PRINTF_NEW_PATH)/obj
	@mkdir -p $(PRINTF_NEW_PATH)/obj

printf_test1:
	@mkdir -p $(PRINTF_NEW_PATH)/test
	@gcc ./printf_test/printf_basic.c $(PRINTF_NAME) -o $(PRINTF_NEW_PATH)/test/test1
	@echo
	@echo "$(BOLD)$(T_YELLOW)Basic test$(RESET)"
	@$(PRINTF_NEW_PATH)/test/test1

printf_test2:
	@mkdir -p $(PRINTF_NEW_PATH)/test
	@gcc ./printf_test/printf_mix.c $(PRINTF_NAME) -o $(PRINTF_NEW_PATH)/test/test2
	@echo
	@echo "$(BOLD)$(T_YELLOW)Mix test$(RESET)"
	@$(PRINTF_NEW_PATH)/test/test2
	
fclean:
	@rm -rf $(PRINTF_NEW_PATH) $(PRINTF_NAME)
	@clear

.PHONY: all cp_printf mk_printf_obj printf printf_test1 fclean