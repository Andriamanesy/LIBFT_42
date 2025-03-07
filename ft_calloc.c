/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briandri <briandri@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:29:54 by briandri          #+#    #+#             */
/*   Updated: 2025/03/07 13:42:45 by briandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char				*memoire;
	unsigned int		i;

	i = 0;
	memoire = malloc(size * nmemb);
	if (memoire == NULL)
		return (NULL);
	while (i < (size * nmemb))
	{
		memoire[i] = 0;
		i++;
	}
	return (memoire);
}
