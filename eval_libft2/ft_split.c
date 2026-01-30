/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokinirr <tokinirr@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 23:17:27 by tokinirr          #+#    #+#             */
/*   Updated: 2026/01/23 23:17:29 by tokinirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countstr(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
		{
			count++;
		}
		i++;
	}
	return (count);
}

static int	free_table(char **tab, int filled)
{
	int	i;

	i = 0;
	if (tab[filled])
		return (1);
	while (i < filled)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}

static char	*word_dup(char const *s, int start, int end)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	skip_sep(const char *s, char c, int *i, int *start)
{
	while (s[*i] && s[*i] == c)
		(*i)++;
	*start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		start;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (countstr(s, c) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		skip_sep(s, c, &i, &start);
		if (start < i)
		{
			tab[j] = word_dup(s, start, i);
			if (!(free_table(tab, j)))
				return (NULL);
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}
