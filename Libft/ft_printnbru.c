/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbru.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 20:51:06 by azakizad          #+#    #+#             */
/*   Updated: 2022/07/02 13:54:15 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printnbru(unsigned int n)
{
	int	len;

	len = 0;
	if (n < 10)
	{
		ft_putchar(n + '0');
		len++;
	}
	else
	{
		len += ft_printnbru(n / 10);
		len += ft_printnbru(n % 10);
	}
	return (len);
}
