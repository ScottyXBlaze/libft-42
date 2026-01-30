/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyramana <nyramana@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:11:47 by nyramana          #+#    #+#             */
/*   Updated: 2026/01/28 17:11:47 by nyramana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t src_size)
{
	size_t	srclen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	if (src_size == 0)
		return (srclen);
	while (src[i] && i < src_size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}
/*
#include <bsd/string.h>
#include <stdio.h>

// Ton prototype
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

void verify_strlcpy
(char *d_mine, char *d_real, const char *src, size_t size, char *test_name)
{
	size_t	r_real;
	size_t	r_mine;

	r_real = strlcpy(d_real, src, size);
	r_mine = ft_strlcpy(d_mine, src, size);
	printf("Test: %s (Size: %zu)\n", test_name, size);
	if (r_real == r_mine && strcmp(d_mine, d_real) == 0)
		printf("  ✅ SUCCESS (Return: %zu, Result: \"%s\")\n", r_mine, d_mine);
	else
	{
		printf("  ❌ FAILURE\n");
		printf("     Attendu : Return %zu, Buffer \"%s\"\n", r_real, d_real);
		printf("     Obtenu  : Return %zu, Buffer \"%s\"\n", r_mine, d_mine);
	}
	printf("---------------------------\n");
}

int	main(void)
{
	char	dest1[20];
	char	dest2[20];
	char	d3[5];
	char	d4[5];
	char	d5[10] = "ABC";
	char	d6[10] = "ABC";

	// Test 1 : Copie normale
	verify_strlcpy(dest1, dest2, "Hello !", 20, "Copie simple");
	// Test 2 : Tronquage (Buffer trop petit)
	verify_strlcpy(d3, d4, "Hello World", 5, "Tronquage");
	// Test 3 : Taille 0
	verify_strlcpy(d5, d6, "Hello", 0, "Size = 0");
	return (0);
}
*/
