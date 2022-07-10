/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:43:24 by azakizad          #+#    #+#             */
/*   Updated: 2022/06/24 08:22:46 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function that locates the first occurrence of the null-terminated string
 * 'needle' in the null-terminated string 'haystack', searching at most 'len'
 * bytes. The return value is either a pointer to the first character of the
 * first occurrence of 'needle' in 'haystack', or NULL if 'needle' isn't
 * contained in 'haystack'.
 */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j]
			&& haystack[i + j] == needle[j] && i + j < len)
		j++;
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
