/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpinto-g <vpinto-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:38:09 by vpinto-g          #+#    #+#             */
/*   Updated: 2025/04/23 12:18:12 by vpinto-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *	ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t l;

	l = 0;
	i = 0;
	
	if (little [0] == 0)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[l])
		{
			while (little[l] != '\0' && big[i + l] == little[l] && (i + l) < len)
			{
				if (little[l] != '\0')
				{
					return ((char *)&big[i]);
				}
				l++;
			}
			l = 0;
		}
		i++;
	}
	return (NULL);
}