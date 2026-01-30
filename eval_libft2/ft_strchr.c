/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokinirr <tokinirr@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:46:43 by tokinirr          #+#    #+#             */
/*   Updated: 2026/01/22 08:46:44 by tokinirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*s1;
	int				i;

	if (!s)
		return (NULL);
	s1 = (unsigned char *)s;
	if (c == '\0')
	{
		i = ft_strlen(s);
		return ((char *)&s1[i]);
	}
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
