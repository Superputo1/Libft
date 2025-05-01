/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpinto-g <vpinto-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:09:51 by vpinto-g          #+#    #+#             */
/*   Updated: 2025/04/29 15:12:53 by vpinto-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t len;
	size_t i;
	
	i = 0;
	len = ft_strlen(src);
	
	if (len + 1 < size)
	{
		while(src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
			dst[i] = '\0';
	}
	else
	{
		while (i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
			dst[i] = '\0';
	}
	return (len);
}