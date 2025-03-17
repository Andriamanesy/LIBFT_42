/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briandri <briandri@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:13:08 by briandri          #+#    #+#             */
/*   Updated: 2025/03/15 14:13:14 by briandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(long n)
{
	int	i;

	i = 0;
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*dst;
	int		cmpt;
	int		fin;
	long	nbr;

	i = 0;
	nbr = n;
	cmpt = count(nbr);
	if (cmpt == 0 || nbr < 0)
		cmpt++;
	fin = cmpt;
	dst = malloc(sizeof(char) * cmpt + 1);
	if (!dst)
		return (NULL);
	if (nbr < 0)
	{
		nbr *= -1;
		dst[0] = '-';
		i++;
	}
	while (cmpt > i)
	{
		cmpt--;
		dst[cmpt] = (nbr % 10) + '0';
		nbr /= 10;
	}
	dst[fin] = '\0';
	return (dst);
}
