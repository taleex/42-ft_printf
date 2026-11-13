/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:50:14 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/13 10:28:49 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				len;
	const unsigned char	*str1;
	const unsigned char	*str2;

	len = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (len < n)
	{
		if (str1[len] != str2[len])
			return (str1[len] - str2[len]);
		len++;
	}
	return (0);
}
