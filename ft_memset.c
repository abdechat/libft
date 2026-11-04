/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achancha <achancha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:00:49 by achancha          #+#    #+#             */
/*   Updated: 2026/10/20 15:00:58 by achancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*strr;
	size_t			i;

	strr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		strr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
