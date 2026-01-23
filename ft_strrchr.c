/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <your@email.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 08:26:14 by username          #+#    #+#             */
/*   Updated: 2026/01/21 08:28:17 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (i > 0 && s[i])
	{
		if (s[i] == c)
			break ;
		i--;
	}
	if (i == 0)
		return ((char *)&s[ft_strlen(s)]);
	return ((char *)&s[i]);
}
