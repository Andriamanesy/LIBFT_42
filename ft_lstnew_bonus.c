/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briandri <briandri@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:19:22 by briandri          #+#    #+#             */
/*   Updated: 2025/03/15 14:19:24 by briandri         ###   ########.fr       */
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
