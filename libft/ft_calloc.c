/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 11:57:49 by jorgferr          #+#    #+#             */
/*   Updated: 2026/10/29 11:21:21 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t n, size_t size)
{
	char	*res;

	if (n != 0 && size > SIZE_MAX / n)
		return (NULL);
	res = malloc(size * n);
	if (!res)
		return (NULL);
	ft_bzero(res, size * n);
	return (res);
}
