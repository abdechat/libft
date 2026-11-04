/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achancha <achancha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:03:55 by achancha          #+#    #+#             */
/*   Updated: 2026/10/20 14:53:30 by achancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(long n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count++;
	if (n < 0)
		n = -n;
	while (n)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nb;
	size_t	len;
	char	*result;

	nb = (long)n;
	len = ft_numlen(nb);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		result[0] = '0';
	while (nb)
	{
		len--;
		result[len] = (nb % 10) + 48;
		nb = nb / 10;
	}
	return (result);
}
