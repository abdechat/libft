/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achancha <achancha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:35:19 by achancha          #+#    #+#             */
/*   Updated: 2026/10/20 14:50:20 by achancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, node);
		lst = lst->next;
	}
	return (new_lst);
}
/*static void	*ft_free_node(t_list *node,void *content,  void (*del)(void *))
{
	t_list	*mm;

	if (!node)
		return ;
	del(content);
	while (node)
	{
		mm = node->next;
		del(node->content);
		free(node);
		node = mm;
	}
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*mnode;
	t_list	*mm;
	void	*content;

	if (!lst)
		return (NULL);
	new_lst = malloc(sizeof(t_list));
	if (!new_lst)
		return (NULL);
	new_lst->next = NULL;
	new_lst->content = f(lst->content);
	lst = lst->next;
	mnode = new_lst;
	while (lst)
	{
		content = f(lst->content);
		mm = ft_lstnew(content);
		if (!mm)
			return (ft_free_node(new_lst, content, del));
		mnode->next = mm;
		mnode = mm;
		lst = lst->next;
	}
	return (new_lst);
}*/
