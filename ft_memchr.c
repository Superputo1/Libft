/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpinto-g <vpinto-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:04:00 by vascopinto        #+#    #+#             */
/*   Updated: 2025/05/01 16:12:38 by vpinto-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    const unsigned char *str = (const unsigned char *)s;
    unsigned char uc = (unsigned char)c;

    i = 0;
    while (i < n)
    {
        if (str[i] == uc)
            return ((void *)(str + i));
        i++;
    }
    return (NULL);
}