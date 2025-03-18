/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briandri <briandri@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:16:18 by briandri          #+#    #+#             */
/*   Updated: 2025/03/18 09:52:40 by briandri         ###   ########.fr       */
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
	new_tab = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!new_tab)
		return (NULL);
	while (j < ft_count_words(s, c))
	{
		new_tab[j] = malloc(sizeof(char) * (ft_strlen_sep(s, c)) + 1);
		if (!new_tab[j])
			return (NULL);
		k = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			new_tab[j][k++] = s[i++];
		}
		new_tab[j][k] = '\0';
		j++;
	}
	new_tab[j] = NULL;
	return (new_tab);
}

static int	ft_strlen_sep(char const *s, char c)
{
	int	i;
	int	cmp;

	i = 0;
	cmp = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		cmp++;
		i++;
	}
	return (cmp);
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
