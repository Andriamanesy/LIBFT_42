/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briandri <briandri@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:05:20 by briandri          #+#    #+#             */
/*   Updated: 2025/03/07 12:21:06 by briandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len_s;
	int		i;
	char	*dup;
	char	*cast_s;

	len_s = ft_strlen(s);
	i = 0;
	cast_s = (char *)s;
	dup = malloc((sizeof(cast_s) * len_s) + 1);
	if (cast_s == NULL)
		return (NULL);
	while (cast_s[i])
	{
		dup[i] = cast_s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
