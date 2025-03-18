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
	char		*cast;
	size_t		len;

	len = ft_strlen(s);
	cast = (char *)s;
	if ((unsigned char)c == '\0')
		return (cast + len);
	while (len > 0)
	{
		if (cast[len - 1] == (unsigned char)c)
			return (cast + len - 1);
		len--;
	}
	return (NULL);
}