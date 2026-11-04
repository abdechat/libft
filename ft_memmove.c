/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achancha <achancha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:54:10 by achancha          #+#    #+#             */
/*   Updated: 2026/10/20 15:00:41 by achancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dstt;
	const unsigned char	*srcc;
	size_t				i;

	dstt = (unsigned char *)dest;
	srcc = (const unsigned char *)src;
	i = 0;
	if (n == 0)
		return (dest);
	if (dstt < srcc)
	{
		while (i < n)
		{
			dstt[i] = srcc[i];
			i++;
		}
	}
	else if (dstt > srcc)
	{
		while (n--)
			dstt[n] = srcc[n];
	}
	return (dest);
}
