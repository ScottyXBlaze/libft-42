/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyramana <nyramana@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 12:39:07 by nyramana          #+#    #+#             */
/*   Updated: 2026/02/03 17:03:51 by nyramana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <stdarg.h>
# include "libft.h"

int		ft_printf(const char *str, ...);
void	deci_to_hexa(unsigned int n, char format);
void	pointer_to_hexa(unsigned long n);
char	*ft_utoa(unsigned int n);

#endif