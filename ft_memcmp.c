/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briandri <briandri@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 09:37:06 by briandri          #+#    #+#             */
/*   Updated: 2025/03/07 11:17:35 by briandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cast_1;
	unsigned char	*cast_2;
	unsigned int	i;

	cast_1 = (unsigned char *)s1;
	cast_2 = (unsigned char *)s2;
	i = 0;
	while (cast_1[i] && cast_2[i] && i < n)
	{
		if (cast_1[i] != cast_2[i])
			return (cast_1[i] - cast_2[i]);
		i++;
	}
	return (0);
}
