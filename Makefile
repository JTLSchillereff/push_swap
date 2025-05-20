###############################################################################
#                                 VARIABLES                                   #
###############################################################################

#.SILENT:
NAME		= push_swap
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f
AR			= ar rcs

# Directories
LIBFT_DIR		= ./src/libft/
FT_PRINTF_DIR	= ./src/ft_printf/

LIBFT_A			= libft.a
FT_PRINTF_A		= libftprintf.a

LIBFT_FILES 	= \
				ft_isprint.c ft_putstr_fd.c ft_strncmp.c ft_atoi.c ft_itoa.c ft_split.c\
				ft_strnstr.c ft_bzero.c ft_memcpy.c ft_striteri.c ft_substr.c ft_calloc.c\
				ft_memmove.c ft_strjoin.c ft_tolower.c ft_isalnum.c ft_memset.c ft_strlcat.c\
				ft_toupper.c ft_memchr.c ft_strchr.c ft_strrchr.c ft_memcmp.c ft_strdup.c\
				ft_strtrim.c ft_isalpha.c ft_putchar_fd.c ft_strlcpy.c ft_isascii.c\
				ft_putednl_fd.c ft_strlen.c ft_isdigit.c ft_putnbr_fd.c  ft_strmapi.c\
				ft_lstadd_back_bonus.c ft_lstclear_bonus.c ft_lstlast_bonus.c ft_lstnew_bonus.c\
				ft_lstadd_front_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c ft_lstsize_bonus.c\
				ft_lstdelone_bonus.c

FTPRINTF_FILES	= \
				ft_printf.c ft_print_ptr.c ft_print_num.c

LIBFT_SRC		= $(addprefix $(LIBFT_DIR), $(LIBFT_FILES))
FTPRINTF_SRC	= $(addprefix $(FT_PRINTF_DIR), $(FTPRINTF_FILES))

LIBFT_OBJ		= $(LIBFT_SRC:.c=.o)
FT_PRINTF_OBJ	= $(FTPRINTF_SRC:.c=.o)

################################################################################
#                                 COLORS                                       #
################################################################################

CLR_RESET	= \033[0m
RED		    = \033[1;31m
GREEN		= \033[1;32m
YELLOW		= \033[1;33m
BLUE		= \033[1;34m
CYAN 		= \033[1;36m
PURPLE 		= \033[0;35m

###############################################################################
#                                 SCRIPT                                      #
###############################################################################

all: $(LIBFT_A) $(FT_PRINTF_A)

$(LIBFT_A): $(LIBFT_OBJ) 
		@echo "$(GREEN)Compiling $(RED)$(LIBFT_A)...$(CLR_RESET)"
		@$(AR) $@ $^
		@echo "$(RED)$(LIBFT_A) $(GREEN)is ready!$(CLR_RESET)\n"
		@echo "$(PURPLE)====================================$(CLR_RESET)"

$(FT_PRINTF_A): $(FT_PRINTF_OBJ) 
		@echo "$(GREEN)Compiling $(RED)$(FT_PRINTF_A)...$(CLR_RESET)"
		@$(AR) $@ $^
		@echo "$(RED)$(FT_PRINTF_A) $(GREEN)is ready!$(CLR_RESET)\n"
		@echo "$(PURPLE)====================================$(CLR_RESET)"

%.0: %.c
		@$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(LIBFT_OBJ) $(FT_PRINTF_OBJ)
		@echo "$(RED)Object files $(GREEN)have been deleted.$(CLR_RESET)\n"

fclean: clean
		$(RM) $(LIBFT_A) $(FT_PRINTF_A)
		@echo "$(RED)$(LIBFT_A) and $(FT_PRINTF_A) $(GREEN)have been deleted.$(CLR_RESET)\n"

re: fclean all
	@echo "$(RED)$(NAME) $(GREEN)has been recompiled.$(CLR_RESET)\n"
	@echo "$(PURPLE)====================================$(CLR_RESET)"

v:
	make re && clear && valgrind --leak-check=full --show-leak-kinds=all ./push_swap "1 2 3 4""5"

.PHONY: all clean fclean re