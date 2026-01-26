/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_putnbr_fd.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: username <your@email.com>					+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/01/26 09:32:24 by username		   #+#	  #+#			  */
/*	 Updated: 2026/01/26 09:40:36 by username		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
