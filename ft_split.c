/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briandri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 08:07:03 by briandri          #+#    #+#             */
/*   Updated: 2025/03/11 14:20:11 by briandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char *str, char c);
static int	ft_strlen_sep(char *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**new_tab;
	char	*cst_s;
	int		i;
	int		k;
	int		j;

	i = 0;
	j = 0;
	k = 0;
	cst_s = (char *)s;
	new_tab = malloc(sizeof(new_tab) * (ft_count_words(cst_s, c) + 1));
	while (i < ft_count_words(cst_s, c))
	{
		new_tab[i] = malloc(sizeof(char *) * (ft_strlen_sep(cst_s, c)) + 1);
		i++;
	}
	i = 0;
	while (j < ft_count_words(cst_s, c))
	{
		while (cst_s[i] != '\0')
		{
			if(cst_s[i] == c && i == 0)
				i = 0;
			else if (cst_s[i] != c)
		    {
				new_tab[j][k] = cst_s[i];
				k++;
		    }
			else if ((cst_s[i] == c || cst_s[i] == '\0') && i != 0)
				new_tab[j][k] = '\0';
		    
			i++;
		}
		k = 0;
		j++;
	}
	return (new_tab);
}

static int	ft_strlen_sep(char *s, char c)
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

static int	ft_count_words(char *str, char c)
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
