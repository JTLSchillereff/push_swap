# Variables
NAME        = libft.a
CC          = cc
CFLAGS      = -Wall -Wextra -Werror
AR          = ar rcs
RM          = rm -f

# Source files
SRCS        = ft_isprint.c ft_putstr_fd.c ft_strncmp.c ft_atoi.c ft_itoa.c ft_split.c\
				ft_strnstr.c ft_bzero.c ft_memcpy.c ft_striteri.c ft_substr.c ft_calloc.c\
				ft_memmove.c ft_strjoin.c ft_tolower.c ft_isalnum.c ft_memset.c ft_strlcat.c\
				ft_toupper.c ft_memchr.c ft_strchr.c ft_strrchr.c ft_memcmp.c ft_strdup.c\
				ft_strtrim.c ft_isalpha.c ft_putchar_fd.c ft_strlcpy.c ft_isascii.c\
				ft_putednl_fd.c ft_strlen.c ft_isdigit.c ft_putnbr_fd.c  ft_strmapi.c

BONUS_SRCS  = ft_lstadd_back_bonus.c ft_lstclear_bonus.c ft_lstlast_bonus.c ft_lstnew_bonus.c\
				ft_lstadd_front_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c ft_lstsize_bonus.c\
				ft_lstdelone_bonus.c


# Object files
OBJS        = $(SRCS:.c=.o)
BONUS_OBJS  = $(BONUS_SRCS:.c=.o)
MAIN_OBJ    = $(MAIN_SRC:.c=.o)

# Header file
HEADER      = libft.h

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(BONUS_OBJS) $(OBJS)
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(BONUS_OBJS) $(MAIN_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re