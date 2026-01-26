/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_lstadd_back.c									:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: username <your@email.com>					+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/01/26 11:22:48 by username		   #+#	  #+#			  */
/*	 Updated: 2026/01/26 11:59:29 by username		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *ptr)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if (last == NULL)
		ft_lstadd_front(lst, ptr);
	else
		last->next = ptr;
}
