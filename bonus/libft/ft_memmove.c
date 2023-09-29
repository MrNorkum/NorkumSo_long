/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 05:25:39 by hkeles            #+#    #+#             */
/*   Updated: 2023/08/19 05:38:28 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = -1;
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (!dst && !src)
		return (0);
	if (d < s)
		while (++i < len)
			d[i] = s[i];
	else if (d > s)
		while (len--)
			d[len] = s[len];
	return (dst);
}
