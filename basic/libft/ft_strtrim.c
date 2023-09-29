/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 05:29:47 by hkeles            #+#    #+#             */
/*   Updated: 2023/08/19 05:29:48 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	const char	*start;
	const char	*end;
	char		*trim;

	start = s1;
	end = s1 + ft_strlen(s1) - 1;
	while (*start && ft_strchr(set, *start))
		start++;
	while (end > start && ft_strchr(set, *end))
		end--;
	len = end - start + 1;
	trim = (char *)malloc(len + 1);
	if (!trim)
		return (NULL);
	return (ft_strlcpy(trim, start, len + 1), trim[len] = '\0', trim);
}
