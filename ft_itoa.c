/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briandri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 07:15:30 by briandri          #+#    #+#             */
/*   Updated: 2025/03/12 11:23:57 by briandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int n)
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

	i = 0;
	cmpt = count(n);
	fin = cmpt + 1;
	if (cmpt == 0 || n < 0)
		cmpt ++;
	dst = malloc(sizeof(dst) * cmpt + 1);
	if (!dst)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		dst[0] = '-';
		i++;
	}
	while (cmpt > i)
	{
		cmpt --;
		dst[cmpt] = (n % 10) + '0';
		n /= 10;
	}
	dst[fin] = '\0';
	return (dst);
}
