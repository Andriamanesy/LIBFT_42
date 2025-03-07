/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briandri <briandri@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 10:28:46 by briandri          #+#    #+#             */
/*   Updated: 2025/03/07 11:56:44 by briandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char			*cast_1;
	char			*cast_2;
	unsigned int	len_little;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	cast_1 = (char *)big;
	cast_2 = (char *)little;
	len_little = ft_strlen(little);
	while (cast_1[i] && i < len)
	{
		if (cast_1[i] == cast_2[j])
			j++;
		else if (j == len_little)
			return (&(cast_1[i - j]));
		else
			j = 0;
		i++;
	}
	if (j == len_little)
		return (&(cast_1[i - j]));
	return (0);
}
