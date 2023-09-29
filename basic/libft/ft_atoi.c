/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 05:21:15 by hkeles            #+#    #+#             */
/*   Updated: 2023/08/19 05:21:25 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

static int	my_atoi(const char *str, int sign, int res, int mod)
{
	if (((9 <= *str && *str <= 13) || *str == 32) && mod == 0)
		return (my_atoi(str + 1, 1, 0, 0));
	if (*str == 43 && mod == 0)
		return (my_atoi(str + 1, 1, 0, 1));
	if (*str == 45 && mod == 0)
		return (my_atoi(str + 1, -1, 0, 1));
	if ('0' <= *str && *str <= '9')
		return (my_atoi(str + 1, sign, res * 10 + *str - 48, 1));
	return (res * sign);
}

int	ft_atoi(const char *str)
{
	return (my_atoi(str, 1, 0, 0));
}
