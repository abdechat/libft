/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achancha <achancha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:44:11 by achancha          #+#    #+#             */
/*   Updated: 2026/10/20 14:51:38 by achancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*result;
	size_t	i;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	if (size == 0 || nmemb == 0)
	{
		result = malloc(1);
		if (!result)
			return (NULL);
		result[0] = 0;
		return (result);
	}
	result = malloc(size * nmemb);
	if (!result)
		return (NULL);
	i = 0;
	while (i < size * nmemb)
	{
		result[i] = 0;
		i++;
	}
	return (result);
}
