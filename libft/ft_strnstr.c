/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:18:33 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/01 16:58:07 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	leng;
	size_t	i;

	leng = 0;
	if (little[0] == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (leng < len && big[leng])
	{
		i = 0;
		while ((leng + i) < len
			&& big[leng + i]
			&& big[leng + i] == little[i])
			i++;
		if (little[i] == '\0')
			return ((char *)&big[leng]);
		leng++;
	}
	return (NULL);
}
