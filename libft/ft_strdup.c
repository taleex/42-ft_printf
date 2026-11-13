/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:08:00 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/13 10:28:45 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dst;

	len = 0;
	while (s[len])
	{
		len++;
	}
	dst = malloc((len + 1));
	if (!dst)
		return (NULL);
	len = 0;
	while (s[len])
	{
		dst[len] = s[len];
		len++;
	}
	dst[len] = '\0';
	return (dst);
}
