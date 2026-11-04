/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achancha <achancha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 09:49:48 by achancha          #+#    #+#             */
/*   Updated: 2026/10/22 17:06:15 by achancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	reslen;
	size_t	kk;
	char	*result;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	kk = ft_strlen(s + start);
	reslen = len;
	if (reslen > kk)
		reslen = kk;
	result = malloc((reslen + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s + start, reslen + 1);
	return (result);
}
