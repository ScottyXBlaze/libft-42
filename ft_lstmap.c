/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <your@email.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 12:58:21 by username          #+#    #+#             */
/*   Updated: 2026/01/26 14:14:02 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new_lst;
	void	*content;

	if (!lst || !f)
		return (NULL);
	tmp = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_lst = ft_lstnew(content);
		if (!new_lst)
		{
			del(content);
			ft_lstclear(&tmp, del);
			return (NULL);
		}
		ft_lstadd_back(&tmp, new_lst);
		lst = lst->next;
	}
	return (tmp);
}
