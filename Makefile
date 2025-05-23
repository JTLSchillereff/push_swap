###############################################################################
#                                 VARIABLES                                   #
###############################################################################

#.SILENT:
NAME		= push_swap
ARCHIVE		= push_swap.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f
AR			= ar rcs

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

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

all: $(NAME)

$(NAME): $(ARCHIVE) 
		@echo "$(GREEN)Compiling $(RED)$(NAME)...$(CLR_RESET)"
		@$(CC) $< -o $@
		@echo "$(RED)$(NAME) $(GREEN)is ready!$(CLR_RESET)\n"
		@echo "$(PURPLE)====================================$(CLR_RESET)"

$(ARCHIVE): $(OBJS)
		$(AR) $(ARCHIVE) $^

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

build:
		$(CC) $(CFLAGS) $(ARCHIVE) -o $(NAME)

clean:
		$(RM) $(OBJS) $(ARCHIVE)
		@echo "$(RED)Object files $(GREEN)have been deleted.$(CLR_RESET)\n"

fclean: clean
		$(RM) $(NAME)
		@echo "$(RED)$(LIBFT_A) and $(printf_A) $(GREEN)have been deleted.$(CLR_RESET)\n"

re: fclean all
	@echo "$(RED)$(NAME) $(GREEN)has been recompiled.$(CLR_RESET)\n"
	@echo "$(PURPLE)====================================$(CLR_RESET)"

v:
	make re && clear && valgrind --leak-check=full --show-leak-kinds=all ./push_swap "1 2 3 4"

.PHONY: all clean fclean re
