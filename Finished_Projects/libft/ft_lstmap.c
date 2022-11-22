/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarribas <aarribas@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 20:23:12 by aarribas          #+#    #+#             */
/*   Updated: 2022/05/04 07:41:03 by aarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*ret;

	if (lst)
	{
		ret = ft_lstnew((*f)(lst->content));
		if (!ret)
			return (NULL);
		tmp = ret;
		lst = lst->next;
		while (lst)
		{
			tmp->next = ft_lstnew((*f)(lst->content));
			if (!tmp->next)
			{
				ft_lstclear(&ret, del);
				return (NULL);
			}
			tmp = tmp->next;
			lst = lst->next;
		}
		return (ret);
	}
	return (NULL);
}
