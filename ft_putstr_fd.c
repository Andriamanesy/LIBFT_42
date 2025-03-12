/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briandri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 10:48:03 by briandri          #+#    #+#             */
/*   Updated: 2025/03/12 11:18:12 by briandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(s);
	if (i < len)
	{
		write(fd, &s[i], 1);
		i++;
	}
}
