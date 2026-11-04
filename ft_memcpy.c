/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achancha <achancha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:41:18 by achancha          #+#    #+#             */
/*   Updated: 2026/10/20 14:57:40 by achancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dstt;
	const unsigned char	*srcc;
	size_t				i;

	dstt = (unsigned char *)dest;
	srcc = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dstt[i] = srcc[i];
		i++;
	}
	return (dest);
}
