/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:12:52 by azakizad          #+#    #+#             */
/*   Updated: 2022/06/24 08:23:01 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function that converts an uppercase letter 'c' to lowercase. If 'c' is no
 * uppercase letter, 'c' is returned unchanged.
 */

int	ft_tolower(int c)
{
	while (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}
