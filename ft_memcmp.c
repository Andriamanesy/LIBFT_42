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
	unsigned int	i;
	unsigned char			*cst_1;
	unsigned char			*cst_2;

	i = 0;
	cst_1 = (unsigned char *)s1;
	cst_2 = (unsigned char *)s2;
	while (i < n)
	{
		if (*cst_1 != *cst_2)
			return ((*cst_1) - (*cst_2));
		cst_1++;
		cst_2++;
		i++;
	}
	return (0);
}
