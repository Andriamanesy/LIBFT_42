/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briandri <briandri@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:41:37 by briandri          #+#    #+#             */
/*   Updated: 2025/03/06 15:46:14 by briandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		index;
	char	*cast;

	index = 0;
	cast = (char *)s;
	while (cast[index] && cast[index] != c)
		index++;
	if (cast[index] == c)
		return (&cast[index]);
	return (0);
}
