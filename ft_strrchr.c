/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achancha <achancha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 14:39:24 by achancha          #+#    #+#             */
/*   Updated: 2026/10/22 17:17:28 by achancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*found;

	i = 0;
	found = NULL;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			found = (char *)&s[i];
		i++;
	}
	if ((unsigned char)s[i] == (unsigned char)c)
		found = (char *)&s[i];
	return (found);
}
