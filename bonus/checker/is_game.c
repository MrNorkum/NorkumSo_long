/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_game.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:18:27 by hkeles            #+#    #+#             */
/*   Updated: 2023/09/28 11:19:36 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	path_finder(t_map *map, int x, int y)
{
	if (map->virtual_map[y][x] == '1')
		return ;
	else if (map->virtual_map[y][x] == 'C')
		map->ctrl_c_cont++;
	else if (map->virtual_map[y][x] == 'E')
		map->door_accessible = 1;
	else if (map->virtual_map[y][x] != 'P' && map->virtual_map[y][x] != '0'
				&& map->virtual_map[y][x] != 'B')
		return (write(2, "C_E_P_B Error\n", 11), exitt(map));
	map->virtual_map[y][x] = '1';
	path_finder(map, x - 1, y);
	path_finder(map, x, y - 1);
	path_finder(map, x + 1, y);
	path_finder(map, x, y + 1);
}

void	is_game(t_map *map)
{
	path_finder(map, map->p_loc[0], map->p_loc[1]);
	if (map->ctrl_c_cont != map->c_cont)
		return (write(2, "Coin cannot be reached\n", 23), exitt(map));
	if (!map->door_accessible)
		return (write(2, "The door cannot be reached\n", 27), exitt(map));
}
