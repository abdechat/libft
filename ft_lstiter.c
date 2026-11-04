/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achancha <achancha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:28:24 by achancha          #+#    #+#             */
/*   Updated: 2026/10/20 14:55:10 by achancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*nnode;

	if (!lst || !f)
		return ;
	nnode = lst;
	while (nnode)
	{
		f(nnode->content);
		nnode = nnode->next;
	}
}
