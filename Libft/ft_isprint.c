/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:21:14 by azakizad          #+#    #+#             */
/*   Updated: 2022/05/04 17:56:44 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Function that returns 1 if 'c' is any printable character
 * and 0 if it isn't.
 */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
