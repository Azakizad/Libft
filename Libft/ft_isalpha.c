/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:57:24 by azakizad          #+#    #+#             */
/*   Updated: 2022/05/04 17:55:46 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Function that returns 1 if 'c' is an alphabetic character
 * (uppercase or lowercase) and 0 if it isn't.
 */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
