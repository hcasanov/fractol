/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcasanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 13:58:41 by hcasanov          #+#    #+#             */
/*   Updated: 2019/05/13 21:19:16 by hcasanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "mlx.h"
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <fcntl.h>
# include <unistd.h>
# include "../libft/libft.h"

typedef struct		s_mlx
{
	int				img_w;
	int				img_h;
	int				screen_w;
	int				screen_h;
	double			z_r;
	double			z_i;
	void			*img_ptr;
	void			*ptr;
	void			*window;
	char			*img_str;
	int				color;
	unsigned char	red;
	unsigned char	green;
	unsigned char	blue;
	double			x1;
	double			x2;
	double			y1;
	double			y2;
	double			zoom;
	double			in_max;
	double			c_r;
	double			c_i;
	double			i;
	int				fractal;
	int				move;
}					t_mlx;

void				ft_usage(void);
void				ft_fractal(t_mlx *mlx);
void				ft_creat_img(t_mlx *mlx);
void				ft_init_list(t_mlx *mlx);
void				ft_exit(t_mlx *mlx);
void				ft_draw_julia(t_mlx *mlx);
void				ft_push_img(t_mlx *mlx);
double				ft_algo_julia(t_mlx *mlx, int x, int y);
void				ft_set_pixel(t_mlx *mlx, int x, int y, double c);
int					ft_get_key(int key, t_mlx *mlx);
void				ft_refresh_img(t_mlx *mlx);
int					ft_get_key_mouse(int mouse_key, int x, int y, t_mlx *mlx);
int					ft_mouse_cur(int x, int y, t_mlx *mlx);
void				ft_key_exit(t_mlx *mlx);
void				ft_draw_mandelbrot(t_mlx *mlx);
double				ft_algo_mandelbrot(t_mlx *mlx, int x, int y);
void				ft_init_list_julia(t_mlx *mlx);
void				ft_init_list_mandelbrot(t_mlx *mlx);
double				ft_algo_burningship(t_mlx *mlx, int x, int y);
void				ft_draw_burningship(t_mlx *mlx);
void				ft_init_list_burningship(t_mlx *mlx);
void				ft_fractal_index(char *str, t_mlx *mlx);
void				ft_reset_img(t_mlx *mlx);
void				ft_move(t_mlx *mlx, int key);
void				ft_color(t_mlx *mlx, int key);
int					ft_close(void *param);

#endif
