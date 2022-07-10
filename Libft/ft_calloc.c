/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:49:29 by azakizad          #+#    #+#             */
/*   Updated: 2022/06/24 08:18:43 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function that uses malloc to allocate memory for 'count' elements of size
 * 'size' and sets this memory to zero.
 */

void	*ft_calloc(size_t count, size_t size)
{
	void	*mmr;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	mmr = malloc(count * size);
	if (mmr == NULL)
		return (NULL);
	ft_bzero(mmr, count * size);
	return (mmr);
}
