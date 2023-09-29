/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 05:24:43 by hkeles            #+#    #+#             */
/*   Updated: 2023/08/19 05:24:44 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*node;
	void	*content;

	if (!lst || !f)
		return (0);
	res = 0;
	while (lst)
	{
		content = f(lst->content);
		if (content == 0)
			ft_lstclear(&res, del);
		if (content == 0)
			return (0);
		node = ft_lstnew(content);
		if (!node)
		{
			free(content);
			ft_lstclear(&res, del);
			return (0);
		}
		ft_lstadd_back(&res, node);
		lst = lst->next;
	}
	return (res);
}
