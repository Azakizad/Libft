/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:11:46 by azakizad          #+#    #+#             */
/*   Updated: 2022/05/04 17:56:08 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Function that returns 1 if 'c' is from the ASCII character set
 * and 0 if it isn't.
 */

int	ft_isascii(int c)
{
	if (c <= 127 && c >= 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
