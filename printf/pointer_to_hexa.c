/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_to_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyramana <nyramana@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 17:02:00 by nyramana          #+#    #+#             */
/*   Updated: 2026/02/03 17:03:45 by nyramana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pointer_to_hexa(unsigned long n)
{
	char	*hex_chars;
	char	hex[17];
	int		i;

	hex_chars = "0123456789abcdef";
	ft_putstr_fd("0x", 1);
	i = 0;
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return ;
	}
	while (n > 0)
	{
		hex[i++] = hex_chars[n % 16];
		n /= 16;
	}
	while (i-- > 0)
		ft_putchar_fd(hex[i], 1);
}
