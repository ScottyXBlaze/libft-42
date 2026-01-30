/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyramana <nyramana@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 10:56:44 by tokinirr          #+#    #+#             */
/*   Updated: 2026/01/30 16:38:46 by nyramana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	size_t i;
	
	i = 0;
	while (i < n)
	{
		if (str[i] == (char) c)
			return (&s[i]);
		i++;
	}
	return NULL;
}
