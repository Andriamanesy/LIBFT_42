/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briandri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 07:42:11 by briandri          #+#    #+#             */
/*   Updated: 2025/03/15 07:42:23 by briandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nw_element;

	nw_element = malloc(sizeof(t_list));
	nw_element -> content = content;
	nw_element -> next = NULL;
	return (nw_element);
}
