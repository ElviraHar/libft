/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elharuty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:22:47 by elharuty          #+#    #+#             */
/*   Updated: 2023/02/09 18:22:48 by elharuty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*s;

	s = *lst;
	if (!(*lst) && new)
	{
		*lst = new;
		return ;
	}
	while ((*lst)->next != NULL)
		(*lst) = (*lst)-> next;
	(*lst)-> next = new;
	*lst = s;
}
