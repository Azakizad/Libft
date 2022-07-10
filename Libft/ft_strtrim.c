/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 13:23:48 by azakizad          #+#    #+#             */
/*   Updated: 2022/06/24 08:22:53 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function that creates and returns a copy of string 's1' with the characters
 * specified in 'set' removed from the beginning and the end of the string.
 * Memory for the new string is obtained with malloc.
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	z;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	z = ft_strlen(s1);
	while (z && ft_strchr(set, s1[z]))
		z--;
	res = ft_substr((char *)s1, 0, z + 1);
	return (res);
}
