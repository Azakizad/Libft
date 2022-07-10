/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:25:09 by azakizad          #+#    #+#             */
/*   Updated: 2022/06/24 08:22:42 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function that compares 'n' bytes of the two strings 'str1' and 'str2'.
 * If no difference is found, 0 is returned. Else, it returns the difference
 * between the first pair of bytes that differ in 'str1' and 'str2'.
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*sc1;
	unsigned char	*sc2;
	size_t			i;

	sc1 = (unsigned char *)s1;
	sc2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n && sc1[i] != '\0' && sc2[i] != '\0')
	{
		if (sc1[i] == sc2[i])
			i++;
		else
			return ((int)sc1[i] - (int)sc2[i]);
	}
	if (i < n)
		return ((int)sc1[i] - (int)sc2[i]);
	return (0);
}
