/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:13:58 by hkeles            #+#    #+#             */
/*   Updated: 2023/09/28 11:14:00 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minilibx/mlx.h"
#include "../so_long.h"

void	exitt(t_map *map)
{
	free_malloc(map->mav, 0);
	free_malloc(map->virtual_map, 0);
	exit(1);
}

void	init(t_map *map)
{
	map->c_cont = 0;
	map->e_cont = 0;
	map->p_cont = 0;
	map->ctrl_c_cont = 0;
	map->door_accessible = 0;
	map->number_of_steps = 0;
}

int	main(int ac, char **av)
{
	t_map	map;

	if (ac != 2)
		return (write(1, "ac != 2\n", 8), 0);
	init(&map);
	checker(av, &map);
	so_long(&map);
}
