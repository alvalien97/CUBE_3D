/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvalien <alvalien@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 12:14:04 by alvalien          #+#    #+#             */
/*   Updated: 2026/01/14 12:14:04 by alvalien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

int	main(int argc, char **argv)
{
	t_cub	*cub;

	ft_check_args(argc, argv);
	cub = ft_init_cub(argv[1]);
	ft_img_renderer(cub);
	mlx_hook(cub->mlx.window, 2, 1L << 0, ft_key_press_handler, cub);
	mlx_hook(cub->mlx.window, 17, 1L << 17, ft_close, cub);
	mlx_loop(cub->mlx.mlx);
	return (0);
}
