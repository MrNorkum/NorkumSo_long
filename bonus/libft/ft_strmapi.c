/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 05:28:55 by hkeles            #+#    #+#             */
/*   Updated: 2023/08/19 05:28:57 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	i = -1;
	str = (char *)malloc(ft_strlen(s) + 1);
	if (!str)
		return (0);
	str[ft_strlen(s)] = '\0';
	while (s[++i])
		str[i] = f(i, s[i]);
	return (str);
}
