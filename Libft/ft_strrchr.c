/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:50:38 by azakizad          #+#    #+#             */
/*   Updated: 2022/06/24 08:22:50 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function that returns a pointer to the last occurrence of the character 'c'
 * in the string 's' or NULL if the character is not found.
 */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*result;
	char	c2;

	c2 = (char)c;
	i = 0;
	result = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c2)
			result = ((char *)(s + i));
		i++;
	}
	if (c2 == '\0')
		return ((char *)(s + i));
	return (result);
}
