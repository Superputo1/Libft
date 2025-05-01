/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpinto-g <vpinto-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:54:00 by vpinto-g          #+#    #+#             */
/*   Updated: 2025/05/01 18:28:57 by vpinto-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_countwords(char const *s,char c)
{
	size_t count;
	size_t i;

	count = 0;
	i = 0; 
	while (s[i] != '\0')
	{	
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}
static char **ft_sepword(char **a, const char *s, char c)
{
	size_t i;
	size_t j;
	size_t len;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		len = 0;
		while (s[i] == c)
			i++;
		while (s[i + len] != '\0' && s[i + len] != c)
			len++;
		if (s[i])
		{
			a[j] = ft_substr(s, i, len + 1);
			if (!a[j++])
			{
				return (NULL);
			}
		}
		i++;
	}
	return (a);
}
char **ft_split(char const *s, char c)
{
	char **ar;
	
	ar = ft_calloc(ft_countwords(s, c) + 1 , sizeof(char *));
	if (!ar)
		return(NULL);
	ft_sepword(ar, s, c);
	return (ar);
}
int	main(void)
{
	char	**tab;
	int		i;
	
	i = 0;
	tab = ft_split("We ,Are,The,Champions,", ',');
	while(tab[i] != NULL)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
