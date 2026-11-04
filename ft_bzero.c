/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achancha <achancha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:30:03 by achancha          #+#    #+#             */
/*   Updated: 2026/10/20 14:51:22 by achancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*strr;
	size_t			i;

	strr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		strr[i] = 0;
		i++;
	}
}
