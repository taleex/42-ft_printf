/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:49:22 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/01 16:03:15 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				len;
	const unsigned char	*str;

	len = 0;
	str = (const unsigned char *)s;
	while (len < n)
	{
		if (str[len] == (unsigned char)c)
			return ((void *)&str[len]);
		len++;
	}
	return (NULL);
}
