/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_ber.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:12:35 by hkeles            #+#    #+#             */
/*   Updated: 2023/09/28 11:12:38 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	is_ber(char **av, t_map *map)
{
	map->ber = av[1];
	if (!ft_strrchr(av[1], '.')
		|| ft_strncmp(ft_strrchr(av[1], '.'), ".ber", 5))
		return (write(2, "Not ber file!!\n", 15), exit(1));
}
