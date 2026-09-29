NAME		= libft.a

SRC_DIR		= srcs
OBJ_DIR		= objs

SRCS		= \
	libft/ft_atoi.c \
	libft/ft_bzero.c \
	libft/ft_calloc.c \
	libft/ft_free_to_trim.c \
	libft/ft_isalnum.c \
	libft/ft_isalpha.c \
	libft/ft_isascii.c \
	libft/ft_isdigit.c \
	libft/ft_isprint.c \
	libft/ft_itoa.c \
	libft/ft_memchr.c \
	libft/ft_memcmp.c \
	libft/ft_memcpy.c \
	libft/ft_memmove.c \
	libft/ft_memset.c \
	libft/ft_putchar_fd.c \
	libft/ft_putendl_fd.c \
	libft/ft_putnbr_fd.c \
	libft/ft_putstr_fd.c \
	libft/ft_split.c \
	libft/ft_strchr.c \
	libft/ft_strdup.c \
	libft/ft_striteri.c \
	libft/ft_strjoin.c \
	libft/ft_strlcat.c \
	libft/ft_strlcpy.c \
	libft/ft_strlen.c \
	libft/ft_strmapi.c \
	libft/ft_strncmp.c \
	libft/ft_strnstr.c \
	libft/ft_strrchr.c \
	libft/ft_strtrim.c \
	libft/ft_substr.c \
	libft/ft_tolower.c \
	libft/ft_toupper.c \
	libft/ft_lstnew.c \
	libft/ft_lstadd_front.c \
	libft/ft_lstadd_back.c \
	libft/ft_lstsize.c \
	libft/ft_lstlast.c \
	libft/ft_lstdelone.c \
	libft/ft_lstclear.c \
	libft/ft_lstiter.c \
	libft/ft_lstmap.c \
	ft_printf/ft_parser.c \
	ft_printf/ft_printf.c \
	ft_printf/ft_putchar.c \
	ft_printf/ft_puthexnbr.c \
	ft_printf/ft_putnbr.c \
	ft_printf/ft_putpointer.c \
	ft_printf/ft_putstr.c \
	ft_printf/ft_putunsigned.c \
	get_next_line/get_next_line.c \
	get_next_line/get_next_line_utils.c

OBJS		= $(SRCS:%.c=$(OBJ_DIR)/%.o)

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
INCLUDES	= -I$(SRC_DIR)

AR			= ar rcs
RM			= rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
