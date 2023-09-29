/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 05:28:24 by hkeles            #+#    #+#             */
/*   Updated: 2023/08/19 05:28:26 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d;
	size_t	s;

	i = -1;
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (!dstsize || dstsize <= d)
		return (dstsize + s);
	while (src[++i] && i < dstsize - d - 1)
		dst[d + i] = src[i];
	return (dst[d + i] = '\0', d + s);
}
