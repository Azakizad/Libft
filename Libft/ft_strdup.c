/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:53:32 by azakizad          #+#    #+#             */
/*   Updated: 2022/06/24 08:22:06 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function that returns a pointer to a new string which is a duplicate of the
 * string 's1'. Memory for the new string is obtained with malloc.
 */

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		index;
	int		len;

	index = 0;
	len = ft_strlen(s1);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (index < len)
	{
		str[index] = s1[index];
		index++;
	}
	str[index] = '\0';
	return (str);
}
