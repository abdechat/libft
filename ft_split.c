/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achancha <achancha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:40:34 by achancha          #+#    #+#             */
/*   Updated: 2026/10/20 15:02:24 by achancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	num_words(const char *str, char set)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != set)
			count++;
		while (str[i] && str[i] != set)
			i++;
		while (str[i] && str[i] == set)
			i++;
	}
	return (count);
}

static size_t	num_chars(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i] && str[i] == c)
		i++;
	while (str[i] && str[i] != c)
	{
		i++;
		count++;
	}
	return (count);
}

static void	*ft_free(char **str, size_t n)
{
	while (n)
	{
		n--;
		free(str[n]);
	}
	free(str);
	return (NULL);
}

static char	*copy_word(char *dst, const char **src, char set)
{
	size_t	i;

	i = 0;
	while (**src && **src != set)
	{
		dst[i] = **src;
		(*src)++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	size_t	count_words;
	size_t	count_chars;
	size_t	i;
	char	**result;

	if (!s)
		return (NULL);
	count_words = num_words(s, c);
	result = malloc((count_words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	result[count_words] = NULL;
	while (i < count_words)
	{
		while (*s && *s == c)
			s++;
		count_chars = num_chars(s, c);
		result[i] = malloc((count_chars + 1) * sizeof(char));
		if (!result[i])
			return (ft_free(result, i));
		copy_word(result[i], &s, c);
		i++;
	}
	return (result);
}
