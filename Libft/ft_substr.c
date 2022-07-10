/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 13:48:36 by azakizad          #+#    #+#             */
/*   Updated: 2022/06/24 08:22:56 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function that returns a substring of the string 's', begins at index 'start'
 * and being of maximum size 'len'. Memory for the substring is obtained with
 * malloc.
 */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subs;
	unsigned int	i;
	unsigned int	size;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	if (len > (ft_strlen(s) - start) + 1)
		size = (ft_strlen(s) - start) + 1;
	else
		size = len + 1;
	subs = malloc(sizeof(char) * size);
	if (subs == NULL)
		return (NULL);
	i = 0;
	while (i < size - 1 && s[start + i] != '\0')
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
