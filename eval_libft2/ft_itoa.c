/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokinirr <tokinirr@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 03:15:40 by tokinirr          #+#    #+#             */
/*   Updated: 2026/01/24 03:15:41 by tokinirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(long n)
{
	int	len;

	len = 1;
	if (n < 0)
		n *= -1;
	while (n > 9)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	filldigit(char *result, long nb, int len)
{
	result[len] = '\0';
	len--;
	while (len >= 0 && result[len] != '-')
	{
		result[len] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	long	nb;
	int		i;

	nb = n;
	len = count_len(nb);
	if (nb < 0)
		len++;
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		result[i] = '\0';
		i++;
	}
	if (nb < 0)
	{
		result[0] = '-';
		nb *= -1;
	}
	filldigit(result, nb, len);
	return (result);
}
