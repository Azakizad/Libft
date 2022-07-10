/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:40:25 by azakizad          #+#    #+#             */
/*   Updated: 2022/06/24 08:22:00 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function that returns a pointer to the first occurrence of the character 'c'
 * in the string 's' or NULL if the character is not found.
 */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	c2;

	c2 = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c2)
			return ((char *)s + i);
		i++;
	}
	if (c2 == '\0')
		return ((char *)s + i);
	return (NULL);
}
