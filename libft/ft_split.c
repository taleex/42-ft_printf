/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 17:42:04 by username          #+#    #+#             */
/*   Updated: 2026/10/27 13:39:59 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static void	*ft_free_all(char **arr, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static char	**ft_fill_array(char **arr, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	wrdzise;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			wrdzise = 0;
			while (s[wrdzise + i] && s[wrdzise + i] != c)
				wrdzise++;
			arr[j] = ft_substr(s, i, wrdzise);
			if (!arr[j])
				return (ft_free_all(arr, j));
			i += wrdzise;
			j++;
		}
	}
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = ft_calloc(ft_count_words(s, c) + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	return (ft_fill_array(arr, s, c));
}
