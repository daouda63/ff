/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaouda <gdaouda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:43:44 by mmondell          #+#    #+#             */
/*   Updated: 2021/08/19 12:00:55 by gdaouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

/*
**	The popular Mandelbrot set. 
**	z_real and z_im both equals exactly 0 so
**	the fractal looks like the original Mandelbrot
*/
int	mandelbrot(t_fractol *f, int x, int y)
{
	double		tmp_z;

	f->fractal.iter = 0;
	f->c.z_real = (f->mouse.x_pos - WINW) / ((double) WINW * 2) + 0.25;
	f->c.z_im = (f->mouse.y_pos - WINH) / ((double) WINH) + 0.5;
	f->c.c_real = f->map.xmin + (f->map.xmax - f->map.xmin)
		* x / WINW;
	f->c.c_im = f->map.ymin + (f->map.ymax - f->map.ymin)
		* y / WINH;
	while (f->fractal.iter < f->fractal.max_iter)
	{
		tmp_z = (f->c.z_real * f->c.z_real)
			 - (f->c.z_im * f->c.z_im) + f->c.c_real;
		f->c.z_im = 2 * f->c.z_real * f->c.z_im + f->c.c_im;
		f->c.z_real = tmp_z;
		if ((f->c.z_real * f->c.z_real) + (f->c.z_im * f->c.z_im) > 4.0f)
			break ;
		f->fractal.iter++;
	}
	return (f->fractal.iter);
}
