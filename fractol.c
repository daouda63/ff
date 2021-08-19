/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaouda <gdaouda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:17:51 by gdaouda           #+#    #+#             */
/*   Updated: 2021/08/19 13:42:34 by gdaouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./mlx/mlx.h"
#include <stdio.h>
#include <math.h>

int main()
{
	float	xm = 1.2f;
	float	x = -2.2f;
	float	ym = 1.2f;
	float	y = -2.2f;
	int imax = 60;

	void    *init_mlx;
	void    *windows_mlx;
	void    *img_mlx;
	int max = 10;
	int m = 0;

	init_mlx = mlx_init();
	windows_mlx = mlx_new_window(init_mlx, 700, 700, "fractol");
	while (y < 700)
	{	
		x = 0;
		while (x < 700)
		{
			mlx_pixel_put(init_mlx, windows_mlx, x, y, 0xff0000);
			x++;
		}
		y++;
	}
			if (sqrt((x * x) + (y * y)) > 4)
			{
				
			}
			else
			{
				while (m < 15)
				{
					x = ((x * x) - (y * y));
					x = (x + xt);
					y = ((xt * y) + (y * xt));
					y = (y + yt);
					m++;
				}
			}
			int w = 0;
			while(w < 600)
			{
				mlx_pixel_put(i* nit_mlx, windows_mlx, x, y, 0xff0000);
				w++;
			}

			printf("x = %f\n",x);
			printf("y = %f\n",y);
	
		}
		
	mlx_loop(init_mlx);
}
