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

# Libft

LIBFT_NAME = libft.a

# Printf

PRINTF_NAME = libftprintf.a

# ---------------------------------------------------------------------
# Strict flags

FLAGS = -Wall -Wextra -Werror

# ---------------------------------------------------------------------
# File paths

# Libft

LIBFT_OLD_PATH = ../First\ Ring/libft

LIBFT_NEW_PATH = ./libft

# Printf

PRINTF_OLD_PATH = ../Second\ Ring/printf

PRINTF_NEW_PATH = ./printf

# ---------------------------------------------------------------------
# C Files

# Libft

LIBFT_FILES = $(LIBFT_NEW_PATH)/files/ft_isalpha.c \
			$(LIBFT_NEW_PATH)/files/ft_isdigit.c \
			$(LIBFT_NEW_PATH)/files/ft_isalnum.c \
			$(LIBFT_NEW_PATH)/files/ft_isascii.c \
			$(LIBFT_NEW_PATH)/files/ft_isprint.c \
			$(LIBFT_NEW_PATH)/files/ft_strlen.c \
			$(LIBFT_NEW_PATH)/files/ft_memset.c \
			$(LIBFT_NEW_PATH)/files/ft_bzero.c \
			$(LIBFT_NEW_PATH)/files/ft_memcpy.c \
			$(LIBFT_NEW_PATH)/files/ft_memmove.c \
			$(LIBFT_NEW_PATH)/files/ft_strlcpy.c \
			$(LIBFT_NEW_PATH)/files/ft_strlcat.c \
			$(LIBFT_NEW_PATH)/files/ft_strchr.c \
			$(LIBFT_NEW_PATH)/files/ft_strrchr.c \
			$(LIBFT_NEW_PATH)/files/ft_toupper.c \
			$(LIBFT_NEW_PATH)/files/ft_tolower.c \
			$(LIBFT_NEW_PATH)/files/ft_strncmp.c \
			$(LIBFT_NEW_PATH)/files/ft_memcmp.c \
			$(LIBFT_NEW_PATH)/files/ft_memchr.c \
			$(LIBFT_NEW_PATH)/files/ft_strnstr.c \
			$(LIBFT_NEW_PATH)/files/ft_atoi.c \
			$(LIBFT_NEW_PATH)/files/ft_calloc.c \
			$(LIBFT_NEW_PATH)/files/ft_strdup.c

LIBFT_FILES_2 = $(LIBFT_NEW_PATH)/files/ft_substr.c \
			$(LIBFT_NEW_PATH)/files/ft_strjoin.c \
			$(LIBFT_NEW_PATH)/files/ft_strmapi.c \
			$(LIBFT_NEW_PATH)/files/ft_striteri.c \
			$(LIBFT_NEW_PATH)/files/ft_strtrim.c \
			$(LIBFT_NEW_PATH)/files/ft_split.c \
			$(LIBFT_NEW_PATH)/files/ft_itoa.c \
			$(LIBFT_NEW_PATH)/files/ft_putchar_fd.c \
			$(LIBFT_NEW_PATH)/files/ft_putstr_fd.c \
			$(LIBFT_NEW_PATH)/files/ft_putendl_fd.c \
			$(LIBFT_NEW_PATH)/files/ft_putnbr_fd.c

LIBFT_FILES_BONUS = $(LIBFT_NEW_PATH)/files/ft_lstnew_bonus.c \
			$(LIBFT_NEW_PATH)/files/ft_lstadd_front_bonus.c \
			$(LIBFT_NEW_PATH)/files/ft_lstsize_bonus.c \
			$(LIBFT_NEW_PATH)/files/ft_lstlast_bonus.c \
			$(LIBFT_NEW_PATH)/files/ft_lstadd_back_bonus.c \
			$(LIBFT_NEW_PATH)/files/ft_lstdelone_bonus.c \
			$(LIBFT_NEW_PATH)/files/ft_lstclear_bonus.c \
			$(LIBFT_NEW_PATH)/files/ft_lstiter_bonus.c \
			$(LIBFT_NEW_PATH)/files/ft_lstmap_bonus.c

# Printf

PRINTF_FILES = $(PRINTF_NEW_PATH)/files/ft_printf.c \
				$(PRINTF_NEW_PATH)/files/ft_putchar.c \
				$(PRINTF_NEW_PATH)/files/ft_putnbr.c

# ---------------------------------------------------------------------
# Object Files

# Libft

LIBFT_OBJS = $(LIBFT_FILES:%.c=%.o) \
			$(LIBFT_FILES_2:%.c=%.o) \
			$(LIBFT_FILES_BONUS:%.c=%.o)

# Printf

PRINTF_OBJS = $(PRINTF_FILES:%.c=%.o)

# ---------------------------------------------------------------------
# Main target

all:
	@echo "Use $(BOLD)make $(T_YELLOW)[ libft | printf ]$(RESET)"

# ---------------------------------------------------------------------
# Macros

# Libft

$(LIBFT_NAME): mk_libft_obj $(LIBFT_OBJS)
	ar rcs $(LIBFT_NAME) $(LIBFT_OBJS)
	@mv $(LIBFT_NEW_PATH)/files/*.o $(LIBFT_NEW_PATH)/obj
	@echo "$(BOLD)$(T_GREEN)SUCESS:$(RESET) $(LIBFT_NAME) created"
	@echo "Use $(BOLD)make $(T_YELLOW)[ libft_test1 | libft_test2 | libft_test3 ]$(RESET)"

# Printf

$(PRINTF_NAME): mk_printf_obj $(PRINTF_OBJS)
	ar rcs $(PRINTF_NAME) $(PRINTF_OBJS)
	@mv $(PRINTF_NEW_PATH)/files/*.o $(PRINTF_NEW_PATH)/obj
	@echo "$(BOLD)$(T_GREEN)SUCCESS:$(RESET) $(PRINTF_NAME) created"
	@echo "Use $(BOLD)make $(T_YELLOW)[ printf_test1 | printf_test2 ]$(RESET)"

# Generate the objects
%.o: %.c
	gcc -Wall -Wextra -Werror -c $< -o $@

# ---------------------------------------------------------------------
# Targets

# Libft

libft: $(LIBFT_NAME)

cp_libft:
	@mkdir -p $(LIBFT_NEW_PATH)
	@mkdir -p $(LIBFT_NEW_PATH)/files
	@cp -r $(LIBFT_OLD_PATH)/*.c $(LIBFT_OLD_PATH)/*.h $(LIBFT_NEW_PATH)/files

mk_libft_obj: cp_libft
	@mkdir -p $(LIBFT_NEW_PATH)/obj

libft_test1: libft
	@mkdir -p $(LIBFT_NEW_PATH)/test
	@gcc ./libft_test/ft_is.c $(LIBFT_NAME) -o $(LIBFT_NEW_PATH)/test/test1
	@echo "\n$(BOLD)$(T_YELLOW)ft_is test$(RESET)"
	@$(LIBFT_NEW_PATH)/test/test1

# Printf

printf: $(PRINTF_NAME)

cp_printf:
	@mkdir -p $(PRINTF_NEW_PATH)
	@mkdir -p $(PRINTF_NEW_PATH)/files
	@cp -r $(PRINTF_OLD_PATH)/src/*c $(PRINTF_OLD_PATH)/utils/*.c $(PRINTF_OLD_PATH)/include/*h $(PRINTF_NEW_PATH)/files

mk_printf_obj: cp_printf
	@mkdir -p $(PRINTF_NEW_PATH)/obj

printf_test1: printf
	@mkdir -p $(PRINTF_NEW_PATH)/test
	@gcc ./printf_test/printf_basic.c $(PRINTF_NAME) -o $(PRINTF_NEW_PATH)/test/test1
	@echo
	@echo "$(BOLD)$(T_YELLOW)Basic test$(RESET)"
	@$(PRINTF_NEW_PATH)/test/test1

printf_test2: printf
	@mkdir -p $(PRINTF_NEW_PATH)/test
	@gcc ./printf_test/printf_mix.c $(PRINTF_NAME) -o $(PRINTF_NEW_PATH)/test/test2
	@echo "\n$(BOLD)$(T_YELLOW)Mix test$(RESET)"
	@$(PRINTF_NEW_PATH)/test/test2
	
fclean:
	@rm -rf $(LIBFT_NEW_PATH) $(LIBFT_NAME) $(PRINTF_NEW_PATH) $(PRINTF_NAME)
	@clear

.PHONY: all fclean \
		cp_libft mk_libft_obj libft libft_test1 \
		cp_printf mk_printf_obj printf printf_test1 printf_test2
