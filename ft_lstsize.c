/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achancha <achancha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:03:47 by achancha          #+#    #+#             */
/*   Updated: 2026/10/20 14:56:43 by achancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;
	t_list			*next_node;

	count = 0;
	next_node = lst;
	while (next_node)
	{
		count++;
		next_node = next_node->next;
	}
	return (count);
}
