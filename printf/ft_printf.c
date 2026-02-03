/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyramana <nyramana@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 12:44:14 by nyramana          #+#    #+#             */
/*   Updated: 2026/02/03 17:08:46 by nyramana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_format(char format, va_list args)
{
	if (format == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	else if (format == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	else if (format == 'd' || format == 'i')
		ft_putstr_fd(ft_itoa(va_arg(args, int)), 1);
	else if (format == 'u')
		ft_putstr_fd(ft_utoa(va_arg(args, unsigned int)), 1);
	else if (format == 'x' || format == 'X')
		deci_to_hexa(va_arg(args, unsigned int), format);
	else if (format == 'p')
		pointer_to_hexa((unsigned long)va_arg(args, void *));
	else if (format == '%')
		ft_putchar_fd('%', 1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	va_start(args, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			handle_format(str[i + 1], args);
			i += 2;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			i++;
		}
	}
	va_end(args);
	return (0);
}
