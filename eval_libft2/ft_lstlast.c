/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokinirr <tokinirr@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 11:41:09 by tokinirr          #+#    #+#             */
/*   Updated: 2026/01/26 11:41:56 by tokinirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;
	int	size;

	i = 0;
	if (!lst)
		return (NULL);
	size = ft_lstsize(lst);
	while (i < size - 1)
	{
		lst = lst -> next;
		i++;
	}
	return (lst);
}
