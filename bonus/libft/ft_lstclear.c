/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 05:23:39 by hkeles            #+#    #+#             */
/*   Updated: 2023/08/19 05:23:40 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*arr;

	if (!lst || !del)
		return ;
	while (*lst != 0)
	{
		arr = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		(*lst) = arr;
	}
	*lst = 0;
}
