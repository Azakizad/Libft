/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:01:32 by azakizad          #+#    #+#             */
/*   Updated: 2022/06/24 08:23:04 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function that converts a lowercase letter 'c' to uppercase. If 'c' is no
 * lowercase letter, 'c' is returned unchanged.
 */

int	ft_toupper(int c)
{
	while (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}
