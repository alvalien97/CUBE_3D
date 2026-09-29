/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvalien <alvalien@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:58:30 by alvalien          #+#    #+#             */
/*   Updated: 2026/01/14 11:58:53 by alvalien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include "../libft/includes/libft.h"
# include "../libft/includes/get_next_line.h"
# include "../libft/includes/ft_printf.h"
# include "../mlx/linux/mlx.h"
# include "../mlx/linux/keys.h"
# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <fcntl.h>
# include <errno.h>
# include <stdbool.h>

# define WIN_WIDTH		1280
# define WIN_HEIGHT		800

# define TEX_WIDTH		64
# define TEX_HEIGHT		64

# define DIR_NORTH		0
# define DIR_SOUTH		1
# define DIR_WEST		2
# define DIR_EAST		3

# define MOVE_SPEED		0.125
# define ROT_SPEED		0.075

typedef struct s_player
{
	double			pos_x;
	double			pos_y;
	double			dir_x;
	double			dir_y;
	double			plane_x;
	double			plane_y;
	double			old_dir_x;
	double			old_plane_x;
}				t_player;

typedef struct s_mlx
{
	void			*mlx;
	void			*window;
	char			*addr;
	void			*img;
	int				bits_per_pixel;
	int				line_length;
	int				endian;
}			t_mlx;

typedef struct s_map
{
	int				width;
	int				height;
	int				player_x;
	int				player_y;
	char			player_dir;
	char			**matrix;
}				t_map;

typedef struct s_textures
{
	t_mlx	*mlx_textures;
	int		floor;
	int		ceiling;
}			t_textures;

typedef struct s_raycast
{
	bool	wall_hit;
	bool	side_hit;
	int		line_height;
	int		draw_from;
	int		draw_to;
	int		map_x;
	int		map_y;
	int		step_x;
	int		step_y;
	int		tex_x;
	int		tex_y;
	double	tex_step;
	double	tex_pos;
	double	tex_wall_x;
	double	ray_dir_x;
	double	ray_dir_y;
	double	side_dist_x;
	double	side_dist_y;
	double	delta_dist_x;
	double	delta_dist_y;
	double	perp_wall_dist;
}			t_raycast;

typedef struct s_cub
{
	t_mlx			mlx;
	t_player		player;
	t_map			map;
	t_textures		textures;
	t_raycast		raycast;
	char			*filepath;
}				t_cub;

t_cub		*ft_init_cub(char *filepath);
void		ft_raycast(t_cub *cub);
void		ft_draw_textures(t_cub *cub, int x);
char		*ft_get_file_extension(char *filename);
void		ft_check_args(int argc, char **argv);
int			ft_key_press_handler(int keycode, t_cub *cub);
int			ft_img_renderer(t_cub *cub);
int			ft_get_pixel_color(t_mlx *mlx, int x, int y);
void		ft_mlx_pixel_put(t_cub *cub, int x, int y, int color);
int			ft_to_trgb(int t, int r, int g, int b);
double		ft_abs(double x);
void		ft_error(char *message);
bool		ft_is_valid_rgb(int r, int g, int b);
char		**ft_strsjoin(char **strs, char *str);
int			dir_from_id(char *identifier);
t_map		ft_map_parser(char *path);
t_textures	ft_texture_parser(t_cub *cub, char *path);
bool		ft_is_map_valid(t_map map);
bool		ft_is_line_valid(char *line);
void		ft_find_player(t_map *map);
int			*scan_rgb(char *identifier, char *line);
int			ft_strslen(char **strs);
void		fl_find_player(t_map map, int *sr, int *sc);
bool		fl_visited_boundary(bool **visited, t_map map);
void		fl_free(bool **visited, t_map map);
bool		fl_can_exit(t_map map);
int			ft_close(t_cub *cub);

#endif
