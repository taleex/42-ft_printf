/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 11:55:07 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/13 10:27:50 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	len;
	int	flag;
	int	res;

	len = 0;
	flag = 1;
	res = 0;
	while ((nptr[len] == ' ') || (nptr[len] >= 9 && 13 >= nptr[len]))
		len++;
	if (nptr[len] == '-' || nptr[len] == '+')
	{
		if (nptr[len] == '-')
			flag = -1;
		len++;
	}
	while (nptr[len] >= '0' && '9' >= nptr[len])
	{
		res = (res * 10) + nptr[len] - '0';
		len++;
	}
	return (res * flag);
}
