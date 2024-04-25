/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaplan <@student.42kocaeli.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 09:09:37 by mkaplan           #+#    #+#             */
/*   Updated: 2024/04/25 09:09:39 by mkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	set_rgb(t_game *game, int k, int flag)
{
	if (flag == 1)
		game->map.f_rgb[k] = cub_atoi(game, game->map.color);
	else if (flag == 2)
		game->map.c_rgb[k] = cub_atoi(game, game->map.color);
	return (1);
}

int	ft_isplus_minus_space(char c)
{
	if (c == '+' || c == '-' || c == ' ')
		return (1);
	return (0);
}
