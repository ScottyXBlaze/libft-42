/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deci_to_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyramana <nyramana@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:58:08 by nyramana          #+#    #+#             */
/*   Updated: 2026/02/03 17:10:19 by nyramana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	deci_to_hexa(unsigned int n, char format)
{
	char    *hex_chars;
	char    hex[9];
	int     i;

	if (format == 'x')
		hex_chars = "0123456789abcdef";
	else
		hex_chars = "0123456789ABCDEF";
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