/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 05:23:00 by hkeles            #+#    #+#             */
/*   Updated: 2023/08/19 05:23:02 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_numlen(int num)
{
	int	i;

	i = 1;
	if (!num)
		return (2);
	if (num < 0)
		i++;
	while ((num > 0 || num < 0) && ++i)
		num /= 10;
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*putnbr;
	long	nb;

	nb = n;
	len = ft_numlen(nb);
	if (n < 0)
		nb = -nb;
	putnbr = (char *)malloc(sizeof(char) * len);
	if (!putnbr)
		return (NULL);
	if (n < 0)
		putnbr[0] = '-';
	if (n == 0)
		putnbr[0] = '0';
	putnbr[--len] = '\0';
	while (nb > 0)
	{
		putnbr[--len] = nb % 10 + 48;
		nb /= 10;
	}
	return (putnbr);
}
