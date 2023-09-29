/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:12:22 by hkeles            #+#    #+#             */
/*   Updated: 2023/09/28 11:12:23 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	checker(char **av, t_map *map)
{
	is_ber(av, map);
	map_split(map);
	is_rectangle(map);
	is_c_e_p(map);
	is_game(map);
}
