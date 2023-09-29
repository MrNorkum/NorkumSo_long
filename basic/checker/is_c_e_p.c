/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_c_e_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:12:45 by hkeles            #+#    #+#             */
/*   Updated: 2023/09/28 11:12:47 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	is_c_e_p(t_map *map)
{
	int	y;
	int	x;

	y = -1;
	while (++y < map->height)
	{
		x = -1;
		while (++x < map->width)
		{
			if (map->mav[y][x] == 'C')
				map->c_cont++;
			else if (map->mav[y][x] == 'E')
				map->e_cont++;
			else if (map->mav[y][x] == 'P')
			{
				map->p_cont++;
				map->p_loc[0] = x;
				map->p_loc[1] = y;
			}
		}
	}
	if (map->c_cont <= 0 || map->e_cont != 1 || map->p_cont != 1)
		return (write(2, "C_E_P Error\n", 11), exitt(map));
}
