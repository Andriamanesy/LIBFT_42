/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briandri <briandri@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:15:55 by briandri          #+#    #+#             */
/*   Updated: 2025/03/06 15:29:36 by briandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*cast;
	int		last_index;

	last_index = ft_strlen(s) - 1;
	cast = (char *)s;
	while (cast[last_index] != c && last_index >= 0)
		last_index--;
	if (cast[last_index] == c)
		return (&cast[last_index]);
	return (0);
}
