/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 05:26:02 by hkeles            #+#    #+#             */
/*   Updated: 2023/08/19 05:26:04 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void	ft_sort_int_tab(int *arr, int size)
{
	int	i;

	while (size >= 0)
	{
		i = -1;
		while (++i < size - 1)
		{
			if (arr[i] > arr[i + 1])
				ft_swap(&arr[i], &arr[i + 1]);
		}
		size--;
	}
}
