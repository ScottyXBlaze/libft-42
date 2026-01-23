/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_strlcat.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: username <your@email.com>					+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/01/21 08:26:05 by username		   #+#	  #+#			  */
/*	 Updated: 2026/01/21 08:32:08 by username		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "libft.h" 

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	j = dst_len;
	i = 0;
	if (dst_len < n - 1 && n > 0)
	{
		while (dst_len + i + 1 < n && src[i])
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	if (n <= dst_len)
		dst_len = n;
	return (dst_len + src_len);
}
