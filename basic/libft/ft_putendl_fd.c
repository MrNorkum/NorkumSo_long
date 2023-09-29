/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 05:26:33 by hkeles            #+#    #+#             */
/*   Updated: 2023/08/19 05:26:35 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	while (*s && write(fd, s++, 1))
		;
	write(fd, "\n", 1);
}

void	ft_putendl(char *s)
{
	while (*s && write(1, s++, 1))
		;
	write(1, "\n", 1);
}
