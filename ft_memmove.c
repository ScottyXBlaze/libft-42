/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_memmove.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: nyramana <marvin@42.fr>					+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/01/19 16:07:04 by nyramana		   #+#	  #+#			  */
/*	 Updated: 2026/01/21 08:26:25 by username		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*c_src;
	char	*c_dst;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	c_src = (char *) src;
	c_dst = (char *) dst;
	i = 0;
	if (c_dst > c_src)
		while (len-- > 0)
			c_dst[len] = c_src[len];
	else
	{
		while (i++ < len)
			c_dst[i] = c_src[i];
	}
	return (dst);
}
