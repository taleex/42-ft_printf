/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:06:54 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/05 12:05:36 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len])
	{
		if (s[len] == (char)c)
			return ((char *)s + len);
		len++;
	}
	if ((char)c == '\0')
		return ((char *)s + len);
	return (0);
}
