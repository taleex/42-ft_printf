/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:51:11 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/13 10:28:49 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	len;

	if (!dest && !src)
		return (NULL);
	len = 0;
	while (len < n)
	{
		((unsigned char *)dest)[len] = ((const unsigned char *)src)[len];
		len++;
	}
	return (dest);
}
