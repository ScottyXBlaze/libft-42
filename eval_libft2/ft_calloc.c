/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokinirr <tokinirr@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 13:11:01 by tokinirr          #+#    #+#             */
/*   Updated: 2026/01/23 13:11:03 by tokinirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	if (size != 0 && (nmemb > SIZE_MAX / size))
	{
		return (NULL);
	}
	tab = malloc(nmemb * size);
	if (!tab)
	{
		return (NULL);
	}
	ft_bzero(tab, (nmemb * size));
	return (tab);
}
