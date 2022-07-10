/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:35:35 by azakizad          #+#    #+#             */
/*   Updated: 2022/06/24 08:21:24 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function that scans the initial 'n' bytes of the memory area pointed to by
 * 's' for the first instance of 'c' and returns a pointer to this byte
 * (or NULL if no matching byte is found).
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char) c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
