/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:23:35 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/05 12:05:51 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_in_set(char const c, char const *set)
{
	int	leng;

	leng = 0;
	while (set[leng])
	{
		if (set[leng] == c)
			return (1);
		leng++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*res;

	start = 0;
	while (s1[start] && ft_is_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_is_in_set(s1[end - 1], set))
		end--;
	res = malloc (end - start + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (start + i < end)
	{
		res[i] = s1[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
