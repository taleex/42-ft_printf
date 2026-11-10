/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:13:56 by jorgferr          #+#    #+#             */
/*   Updated: 2026/10/28 14:49:53 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	dst_leng;
	size_t	src_leng;
	size_t	i;

	src_leng = 0;
	dst_leng = 0;
	i = 0;
	while (src[src_leng])
		src_leng++;
	if (siz == 0 && !dst)
		return (src_leng);
	while (dst_leng < siz && dst[dst_leng])
		dst_leng++;
	if (dst_leng == siz)
		return (siz + src_leng);
	while (src[i] && dst_leng + i < siz - 1)
	{
		dst[dst_leng + i] = src[i];
		i++;
	}
	dst[dst_leng + i] = '\0';
	return (dst_leng + src_leng);
}
