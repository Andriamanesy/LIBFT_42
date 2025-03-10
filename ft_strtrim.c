/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briandri <briandri@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 07:51:05 by briandri          #+#    #+#             */
/*   Updated: 2025/03/10 13:20:28 by briandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_first_s1(char *s1, char *set);
static int	check_last_s1(char *s1, char *set);
static char	*search_new_str(char *s1, char *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*cst_s1;
	char			*cst_set;
	char			*new_str;
	unsigned int	len;

	cst_s1 = (char *)s1;
	cst_set = (char *)set;
	len = (ft_strlen(cst_s1) - (ft_strlen(cst_set) * 2) - 1);
	new_str = malloc(sizeof(char) * len);
	if (search_new_str(cst_s1, cst_set) == NULL
		|| new_str == NULL || (check_first_s1(cst_s1, cst_set)) == 0
		|| (check_last_s1(cst_s1, cst_set)) == 0)
		return (NULL);
	new_str = search_new_str(cst_s1, cst_set);
	return (new_str);
}

static int	check_first_s1(char *s1, char *set)
{
	int	len_set;
	int	i;
	int	j;

	len_set = ft_strlen(set);
	i = 0;
	j = 1;
	while (s1[i] == set[i])
	{
		if (j == len_set)
			return (j);
		j++;
		i++;
	}
	return (0);
}

static int	check_last_s1(char *s1, char *set)
{
	int				i;
	int				j;
	unsigned int	cmp;

	cmp = 0;
	i = ft_strlen(s1) - 1;
	j = ft_strlen(set) - 1;
	while ((i >= 0) && (j >= 0) && (set[j] == s1[i]))
	{
		j--;
		i--;
		cmp++;
	}
	if (cmp == ft_strlen(set))
		return (i);
	return (0);
}

static char	*search_new_str(char *s1, char *set)
{
	int		i;
	int		j;
	int		k;
	char	*new_str;

	i = check_first_s1(s1, set);
	j = check_last_s1(s1, set);
	k = 0;
	new_str = malloc(sizeof(char) * (ft_strlen(s1) - (ft_strlen(set) * 2) + 1));
	if (new_str == NULL)
		return (NULL);
	while (i <= j)
	{
		new_str[k] = s1[i];
		i++;
		k++;
	}
	new_str[i] = '\0';
	return (new_str);
}
