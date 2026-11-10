/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:17:33 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/01 16:00:12 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	len = 0;
	while (len < n)
	{
		if (s1[len] != s2[len])
			return ((unsigned char)s1[len] - (unsigned char)s2[len]);
		if (s1[len] == '\0')
			return (0);
		len++;
	}
	return (0);
}
