/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpinto-g <vpinto-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:38:09 by vpinto-g          #+#    #+#             */
/*   Updated: 2025/05/06 16:54:57 by vpinto-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l;

	l = 0;
	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[l])
		{
			while (little[l] && big[i + l] == little[l] && (i + l) < len)
			{
				if (little[l] != '\0')
				{
					return ((char *)&big[i]);
				}
				l++;
				i++;
			}
			l = 0;
		}
		i++;
	}
	return (NULL);
}
