/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:00:41 by azakizad          #+#    #+#             */
/*   Updated: 2022/05/04 17:56:23 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Function that returns 1 if 'c' is a digit (0 through 9)
 * and 0 if it isn't.
 */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
