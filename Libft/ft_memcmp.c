/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:18:00 by azakizad          #+#    #+#             */
/*   Updated: 2022/06/24 08:21:28 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function that compares the first 'n' bytes of the memory areas 's1'
 * and 's2'. If no difference is found, 0 is returned. Else, it returns the
 * difference between the first pair of bytes that differ in 's1' and 's2'.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sc1;
	unsigned char	*sc2;
	size_t			i;

	sc1 = (unsigned char *)s1;
	sc2 = (unsigned char *)s2;
	i = 0;
	while (i < n && sc1[i] == sc2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((int)sc1[i] - (int)sc2[i]);
}
