/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briandri <briandri@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:26:35 by briandri          #+#    #+#             */
/*   Updated: 2025/03/18 16:06:19 by briandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nw_element;

	nw_element = malloc(sizeof(t_list));
	if (nw_element == NULL)
		return (NULL);
	nw_element -> content = content;
	nw_element -> next = NULL;
	return (nw_element);
}
