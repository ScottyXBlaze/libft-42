/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_strchr.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: username <your@email.com>					+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/01/21 08:26:03 by username		   #+#	  #+#			  */
/*	 Updated: 2026/01/21 08:27:50 by username		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	return (NULL);
}
