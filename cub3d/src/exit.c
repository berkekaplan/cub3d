/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaplan <@student.42kocaeli.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 09:09:32 by mkaplan           #+#    #+#             */
/*   Updated: 2024/04/25 09:09:35 by mkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../include/cub3d.h"
#include "../minilibx/mlx.h"
#include "../libft/libft.h"

static void	ft_destroy(t_game *game, int status)
{
	if (game->north)
		mlx_destroy_image(game->mlx.ptr, game->north->image);
	if (game->south)
		mlx_destroy_image(game->mlx.ptr, game->south->image);
	if (game->west)
		mlx_destroy_image(game->mlx.ptr, game->west->image);
	if (game->east)
		mlx_destroy_image(game->mlx.ptr, game->east->image);
	if (game->image)
		mlx_destroy_image(game->mlx.ptr, game->image->image);
	if (game->mlx.win)
		mlx_destroy_window(game->mlx.ptr, game->mlx.win);
	exit(status);
}

void	ext_2(t_game *game)
{
	if (game->map.line)
		free(game->map.line);
	if (game->map.map_line)
		free(game->map.map_line);
	if (game->map.info_line)
		free(game->map.info_line);
	if (game->map.dirs[0])
		free(game->map.dirs[0]);
	if (game->map.dirs[1])
		free(game->map.dirs[1]);
	if (game->map.dirs[2])
		free(game->map.dirs[2]);
	if (game->map.dirs[3])
		free(game->map.dirs[3]);
	if (game->map.color)
		free(game->map.color);
}

void	ext(t_game *game, int status, bool destroy)
{
	if (game->map.fd)
		close(game->map.fd);
	if (game->map.info)
		free_malloc(game->map.info, 0);
	if (game->map.area)
		free_malloc(game->map.area, 0);
	if (game->map.temp_area)
		free_malloc(game->map.temp_area, 0);
	ext_2(game);
	if (destroy)
		ft_destroy(game, status);
	exit(status);
}
