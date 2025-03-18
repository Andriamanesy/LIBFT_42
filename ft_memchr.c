/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briandri <briandri@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 08:55:54 by briandri          #+#    #+#             */
/*   Updated: 2025/03/18 14:51:27 by briandri         ###   ########.fr       */
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
		if ((c >= 256 && (cast[i] == (char)c)) || (cast[i] == (char)c))
			return (&cast[i]);
		i++;
	}
	return (0);
}
