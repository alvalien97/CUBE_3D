/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvalien <alvalien@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 12:14:04 by alvalien          #+#    #+#             */
/*   Updated: 2026/01/14 12:14:04 by alvalien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

void	ft_free_map(t_cub *cub)
{
	int	i;

	i = -1;
	while (++i < cub->map.height)
		free(cub->map.matrix[i]);
	free(cub->map.matrix);
}

void	ft_free_textures(t_cub *cub)
{
	if (!cub->textures.mlx_textures)
		return ;
	if (cub->textures.mlx_textures[DIR_NORTH].img)
		mlx_destroy_image(cub->mlx.mlx,
			cub->textures.mlx_textures[DIR_NORTH].img);
	if (cub->textures.mlx_textures[DIR_SOUTH].img)
		mlx_destroy_image(cub->mlx.mlx,
			cub->textures.mlx_textures[DIR_SOUTH].img);
	if (cub->textures.mlx_textures[DIR_EAST].img)
		mlx_destroy_image(cub->mlx.mlx,
			cub->textures.mlx_textures[DIR_EAST].img);
	if (cub->textures.mlx_textures[DIR_WEST].img)
		mlx_destroy_image(cub->mlx.mlx,
			cub->textures.mlx_textures[DIR_WEST].img);
	free(cub->textures.mlx_textures);
}

int	ft_close(t_cub *cub)
{
	if (!cub)
		return (1);
	if (cub->mlx.window)
		mlx_destroy_window(cub->mlx.mlx, cub->mlx.window);
	if (cub->mlx.img)
		mlx_destroy_image(cub->mlx.mlx, cub->mlx.img);
	ft_free_map(cub);
	ft_free_textures(cub);
	exit(EXIT_SUCCESS);
	return (0);
}
