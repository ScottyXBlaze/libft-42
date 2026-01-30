/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokinirr <tokinirr@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 19:35:16 by tokinirr          #+#    #+#             */
/*   Updated: 2026/01/23 19:35:17 by tokinirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strimed;
	int		i;
	int		len;
	int		strimedlen;

	if (!set || !s1)
		return (NULL);
	i = 0;
	len = ft_strlen(s1) - 1;
	while (is_set(set, s1[i]))
		i++;
	while (is_set(set, s1[len]))
		len--;
	strimedlen = ft_strlen(&s1[i]) - ft_strlen(&s1[len]);
	strimed = ft_substr(s1, i, (strimedlen + 1));
	return (strimed);
}
