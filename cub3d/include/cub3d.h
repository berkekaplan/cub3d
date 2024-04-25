/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaplan <@student.42kocaeli.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 09:11:23 by mkaplan           #+#    #+#             */
/*   Updated: 2024/04/25 10:40:34 by mkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <stdbool.h>

# define WIDTH 720
# define HEIGHT 550
# define TEXWIDTH 64
# define TEXHEIGHT 64

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define PURPLE "\033[1;35m"
# define CYAN "\033[1;36m"
# define RES "\033[0m"

# define E "%sError: %s%s"

# define LEFT_ARROW 123
# define RIGHT_ARROW 124
# define ESC 53
# define W 13
# define A 0
# define S 1
# define D 2

typedef struct s_error
{
	const char	*arg;
	const char	*extention;
	const char	*fd;
	const char	*empty_map;
	const char	*alloc;
	const char	*inv_char;
	const char	*inv_map;
	const char	*inv_rgb;
	const char	*inv_path;
	const char	*inv_plyr;
	const char	*int_ovflw;
	const char	*mlx;
}			t_error;

typedef struct s_image
{
	void	*image;
	int		*addr;
}			t_image;

typedef struct s_mlx
{
	void	*ptr;
	void	*win;
}			t_mlx;

typedef struct s_map
{
	int		fd;
	int		max;
	int		start;
	int		f_rgb[3];
	int		c_rgb[3];
	int		colors[2];
	int		location[2];
	int		nswe_size[4];
	int		size;
	char	*dirs[4];
	char	*color;
	char	**info;
	char	**area;
	char	**temp_area;
	char	*line;
	char	*map_line;
	char	*info_line;
	char	player;
}			t_map;

typedef struct s_game
{
	t_error	err;
	t_mlx	mlx;
	t_map	map;
	t_image	*north;
	t_image	*south;
	t_image	*west;
	t_image	*east;
	t_image	*image;
	float	speed;
	float	rspeed;
	double	camera_x;
	double	wall_x;
	double	tex_pos;
	double	step_size;
	double	perp_wall_dist;
	double	pos[2];
	double	dir[2];
	double	plane[2];
	double	side_dist[2];
	double	delta_dist[2];
	double	raydir[2];
	int		map_pos[2];
	int		step[2];
	int		tex[2];
	int		side;
	int		line_h;
	int		draw_start;
	int		draw_end;
	bool	w;
	bool	s;
	bool	a;
	bool	d;
	bool	left;
	bool	right;
}			t_game;

int			move_press(int keyCode, t_game *game);
int			move_release(int keyCode, t_game *game);
void		movement(t_game *game);
void		rotate(t_game *g, double dir, double plane);

void		calculate_ray_direction_and_distances(t_game *game, int x);
void		calculate_step(t_game *game);
void		calculate_collision_distance(t_game *game);
void		calculate_wall_properties(t_game *game);
void		render_column(t_game *game, int x, int y);

int			gamefunc(t_game *game);

int			exit_mlx(t_game *game);
void		ft_mlx(t_game *game, int a, int b);

void		ext(t_game *game, int status, bool destroy);
char		*replace_tabs_with_spaces(const char *str, int tab, int i, int j);
void		rgb_and_path_check(t_game *game);
void		is_cub(char *file_name, t_game *game);
int			cub_atoi(t_game *game, const char *str);

void		map_read_and_parsing(t_game *game);

void		map_check(t_game *game);

void		init_manager(t_game *game);
void		ray_and_mlx_init(t_game *game);

int			set_rgb(t_game *game, int k, int flag);
int			ft_isplus_minus_space(char c);

#endif
