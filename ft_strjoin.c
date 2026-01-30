/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyramana <nyramana@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:11:37 by nyramana          #+#    #+#             */
/*   Updated: 2026/01/28 17:11:38 by nyramana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	res = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (s1[i])
		res[j++] = s1[i++];
	i = 0;
	while (s2[i])
		res[j++] = s2[i++];
	res[j] = 0;
	return (res);
}
/*
#include <stdio.h>

int	main(void) {
	const char* mot1 = "Hello ";
	const char* mot2 = "World!";

	char* phrase = ft_strjoin(mot1, mot2);

	if (phrase != NULL) {
		printf("Chaîne 1 : %s\n", mot1);
		printf("Chaîne 2 : %s\n", mot2);
		printf("Résultat : %s\n", phrase);

		// Libération de la mémoire
		free(phrase);
	}

	return (0);
}
*/
