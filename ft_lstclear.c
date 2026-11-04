/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achancha <achancha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:19:12 by achancha          #+#    #+#             */
/*   Updated: 2026/10/20 14:54:30 by achancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nnode;
	t_list	*mnode;

	if (!lst || !del)
		return ;
	nnode = *lst;
	while (nnode)
	{
		mnode = nnode->next;
		del(nnode->content);
		free(nnode);
		nnode = mnode;
	}
	*lst = NULL;
}
