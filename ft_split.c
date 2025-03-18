/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briandri <briandri@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:16:18 by briandri          #+#    #+#             */
/*   Updated: 2025/03/15 14:16:22 by briandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *str, char c);
static int	ft_strlen_sep(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**new_tab;
	int		i;
	int		k;
	int		j;

	i = 0;
	j = 0;
	k = 0;
	new_tab = malloc(sizeof(new_tab) * (ft_count_words(s, c) + 1));
	if (!new_tab)
		return (NULL);
	while (i < ft_count_words(s, c))
	{
		new_tab[i++] = malloc(sizeof(char *) * (ft_strlen_sep(s, c)) + 1);
		if (!new_tab[i])
			return (NULL);
	}
	while (j < ft_count_words(s, c))
	{
		while (s[i])
		{
			if (s[i] == c && i == 0)
				i = 0;
			else if (s[i] != c)
				new_tab[j][k++] = s[i];
			else if ((s[i] == c || s[i] == '\0') && i != 0)
				new_tab[j][k] = '\0';
			i++;
		}
		k = 0;
		j++;
	}
	return (new_tab);
}

static int	ft_strlen_sep(char const *s, char c)
{
	int	i;
	int	cmp;

	i = 0;
	cmp = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && i == 0)
			cmp = 0;
		else if (s[i] != c)
			cmp++;
		else if (s[i] == c)
			return (cmp);
		i++;
	}
	return (0);
}

static int	ft_count_words(char const *str, char c)
{
	int	count_wd;
	int	i;

	i = 0;
	count_wd = 0;
	while (str[i])
	{
		if ((str[i] != c && str[i + 1] == c) || str[i + 1] == '\0')
			count_wd++;
		i++;
	}
	return (count_wd);
}
