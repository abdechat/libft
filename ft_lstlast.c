/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achancha <achancha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 08:42:36 by achancha          #+#    #+#             */
/*   Updated: 2026/10/20 14:55:51 by achancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*nnode;

	if (!lst)
		return (NULL);
	nnode = lst;
	while (nnode)
	{
		if (!nnode->next)
			return (nnode);
		nnode = nnode->next;
	}
	return (NULL);
}
