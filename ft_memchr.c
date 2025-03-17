/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briandri <briandri@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 08:55:54 by briandri          #+#    #+#             */
/*   Updated: 2025/03/07 09:29:43 by briandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cast;
	unsigned int	i;

	i = 0;
	cast = (unsigned char *)s;
	while (i < n)
	{
		if (c >= 256 && (cast[i] == c % 256))
			return (&cast[i]);
		if (cast[i] == c)
		{
			return (&cast[i]);
		}
			
		i++;
	}
	return (0);
}
