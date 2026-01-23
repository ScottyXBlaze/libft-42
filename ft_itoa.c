/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_itoa.c											:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: username <your@email.com>					+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/01/23 10:51:10 by username		   #+#	  #+#			  */
/*	 Updated: 2026/01/23 11:31:15 by username		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "libft.h"
static int int_len(long nbr);
static char *pre_conv(int len);

char *ft_itoa(int n)
{
	int len;
	int i;
	char *result;
	long nbr;

	nbr = n;
	len = int_len(nbr);
	result = pre_conv(len);
	if (!result)
		return (NULL);
	if (nbr < 0)
		nbr = -nbr;
	i = len - 1;
	while (nbr != 0)
	{
		result[i] = ((nbr % 10) + 48);
		nbr = nbr / 10;
		i--;
	}
	if (n < 0)
		result[0] = '-';
	result[len] = 0;
	return (result);
}

static char *pre_conv(int len)
{
	char *ptr;
	
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[0] = '0';
	return (ptr);
}

static int int_len(long nbr)
{
	int lengh;
	
	lengh = 0;
	if (nbr < 0)
		lengh++;
	if (nbr < 0)
		nbr = -nbr;
	if (nbr == 0)
		lengh++;
	while (nbr != 0)
	{
		nbr /= 10;
		lengh++;
	}
	return (lengh);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

// Prototype de votre fonction
char *ft_itoa(int n);

void test_itoa(int n, const char *expected)
{
    char *result = ft_itoa(n);
    
    if (result && strcmp(result, expected) == 0)
    {
        printf("[✅ PASS] Input: %11d | Expected: %s | Result: %s\n", n, expected, result);
    }
    else
    {
        printf("[❌ FAIL] Input: %11d | Expected: %s | Result: %s\n", n, expected, result ? result : "NULL");
    }
    free(result);
}

int main(void)
{
    printf("--- Tests ft_itoa ---\n");

    // Cas classiques
    test_itoa(0, "0");
    test_itoa(7, "7");
    test_itoa(-7, "-7");
    test_itoa(1234, "1234");
    test_itoa(-1234, "-1234");

    // Limites de l'int (Attention au dépassement !)
    test_itoa(2147483647, "2147483647");
    test_itoa(-2147483648, "-2147483648"); // Le fameux INT_MIN

    printf("--- Fin des tests ---\n");
    return (0);
}
*/
