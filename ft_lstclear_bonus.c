/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briandri <briandri@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:11:10 by briandri          #+#    #+#             */
/*   Updated: 2025/03/19 10:21:24 by briandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*tmp;
	t_list	*tmp_2;

	tmp_2 = *lst;
	if (!lst || !del)
		return ;
	while (tmp_2)
	{
		tmp = (tmp_2)-> next;
		ft_lstdelone(tmp_2, del);
		tmp_2 = tmp;
	}
	(*lst) = NULL;
}
