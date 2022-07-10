/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:46:23 by azakizad          #+#    #+#             */
/*   Updated: 2022/06/24 08:21:35 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function that copies 'n' bytes from memory area 'src' to memory area 'dst'.
 * The memory areas may overlap.
 */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_copy;
	unsigned char	*src_copy;
	size_t			i;

	i = 0;
	dst_copy = (unsigned char *)dst;
	src_copy = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst_copy > src_copy)
	{
		while (len-- > 0)
		{
			dst_copy[len] = src_copy[len];
		}
	}
	else
	{
		while (i < len)
		{
			dst_copy[i] = src_copy[i];
			i++;
		}
	}
	return (dst);
}
