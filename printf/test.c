/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyramana <nyramana@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 12:55:43 by nyramana          #+#    #+#             */
/*   Updated: 2026/02/03 17:07:31 by nyramana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(int argc, char const *argv[])
{
	int	i;
	int	*ptr;

	ptr = &i;
	ft_printf("This is a string: %s\n", "Hello, World!");
	ft_printf("This is a character: %c\n", 'A');
	ft_printf("This is a decimal: %d\n", 42);
	ft_printf("This is an integer: %i\n", -42);
	ft_printf("This is an unsigned integer: %u\n", UINT_MAX);
	printf("This is an unsigned integer (printf): %u\n", UINT_MAX);
	ft_printf("This is a percent sign: %%\n");
	ft_printf("This is hexadecimal (lowercase): %x\n", 2555);
	printf("This is hexadecimal (lowercase) (printf): %x\n", 2555);
	ft_printf("This is hexadecimal (uppercase): %X\n", 2555);
	printf("This is hexadecimal (uppercase) (printf): %X\n", 2555);
	ft_printf("This is a pointer: %p\n", (void *)ptr);
	printf("This is a pointer (printf): %p\n", (void *)ptr);
	return (0);
}
