
NAME		= cub3d

SRC_DIR		= srcs
OBJ_DIR		= objs
LIBFT_DIR	= libft
MLX_DIR		= mlx/linux

SRCS		= \
	mandatory/cub3d.c \
	mandatory/game/ft_game_init.c \
	mandatory/game/ft_key_handler.c \
	mandatory/parsing/ft_args_checker.c \
	mandatory/parsing/ft_floodfill.c \
	mandatory/parsing/ft_parser.c \
	mandatory/parsing/ft_scan.c \
	mandatory/parsing/ft_tx_parser.c \
	mandatory/raycasting/ft_drawer.c \
	mandatory/raycasting/ft_raycaster.c \
	mandatory/utils/ft_floodfill_utils.c \
	mandatory/utils/ft_free_utils.c \
	mandatory/utils/ft_mlx_utils.c \
	mandatory/utils/ft_other_utils.c \
	mandatory/utils/ft_parser_utils.c

OBJS		= $(SRCS:%.c=$(OBJ_DIR)/%.o)

LIBFT		= $(LIBFT_DIR)/libft.a
MLX			= $(MLX_DIR)/libmlx.a

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -g
INCLUDES	= -I$(LIBFT_DIR)/includes -I$(MLX_DIR)

LDFLAGS		= -L$(MLX_DIR) -lmlx -lXext -lX11 -lm -lz

RM			= rm -rf

all: $(NAME)

$(NAME): $(LIBFT) $(MLX) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $(NAME) $(LIBFT)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(LIBFT):
	make -C $(LIBFT_DIR)

$(MLX):
	make -C $(MLX_DIR)

clean:
	make clean -C $(LIBFT_DIR)
	make clean -C $(MLX_DIR)
	$(RM) $(OBJ_DIR)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re