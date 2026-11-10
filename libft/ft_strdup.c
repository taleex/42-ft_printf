/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:08:00 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/01 17:06:39 by username         ###   ########.fr       */
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
