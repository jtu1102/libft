/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soahn <soahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:48:40 by soahn             #+#    #+#             */
/*   Updated: 2021/05/07 15:05:07 by soahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*now;
	t_list	*tmp;

	now = *lst;
	while (now != NULL)
	{
		tmp = now->next;
		ft_lstdelone(now, del);
		now = tmp;
	}
	*lst = NULL;
}
