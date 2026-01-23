/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_strnstr.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: username <your@email.com>					+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/01/21 08:26:12 by username		   #+#	  #+#			  */
/*	 Updated: 2026/01/21 08:26:12 by username		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little[0])
		return ((char *) big);
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && big[i + j] && i + j < len)
		{
			j++;
			if (little[j] == 0)
				return ((char *) big + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
