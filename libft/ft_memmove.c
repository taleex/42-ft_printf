/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:03:53 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/13 10:28:48 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*destmov;
	char	*srcmov;

	if (!dest && !src)
		return (NULL);
	destmov = (char *)dest;
	srcmov = (char *)src;
	i = 0;
	if (destmov > srcmov)
	{
		while (n--)
		{
			destmov[n] = srcmov[n];
		}
	}
	else
	{
		while (i < n)
		{
			destmov[i] = srcmov[i];
			i++;
		}
	}
	return (destmov);
}
