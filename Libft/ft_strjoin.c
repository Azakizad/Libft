/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 01:55:54 by azakizad          #+#    #+#             */
/*   Updated: 2022/06/24 08:22:24 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function that returns a new string which is the result of the concatenation
 * of the strings 's1' and 's2'. Memory for the new string is obtained with
 * malloc.
 */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*jst;
	size_t	lens1;
	size_t	lens2;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	jst = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!jst)
		return (NULL);
	ft_memcpy(jst, s1, lens1);
	ft_memcpy(jst + lens1, s2, lens2 + 1);
	return (jst);
}
