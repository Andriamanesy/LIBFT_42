/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briandri <briandri@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:07:53 by briandri          #+#    #+#             */
/*   Updated: 2025/03/06 11:07:53 by briandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (!d && !s)
		return (0);
	while (i <= n)
	{
		*(d + n - i) = *(s + n - i);
		i++;
	}
	return (dest);
}
