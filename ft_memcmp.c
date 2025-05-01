/* ************************************************************************** */
/*                      memcmp                          :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpinto-g <vpinto-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:10:11 by vpinto-g          #+#    #+#             */
/*   Updated: 2025/04/23 11:10:27 by vpinto-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	const unsigned char *s3 = (const unsigned char *)s1;
	const unsigned char *s4 = (const unsigned char *)s2;

	i = 0;
    while (i < n && s3[i] == s4[i])
    {  
        i++;
    }
    if  (i == n)
        return (0);
    return (s3[i] - s4[i]);
}
