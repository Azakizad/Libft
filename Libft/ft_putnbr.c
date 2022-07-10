/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 22:53:46 by azakizad          #+#    #+#             */
/*   Updated: 2022/07/02 13:43:02 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	int	len;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", 1);
		return (11);
	}
	len = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
		len++;
	}
	if (n < 10)
	{
		ft_putchar(n + '0');
		len++;
	}
	else
	{
		len += ft_putnbr(n / 10);
		len += ft_putnbr(n % 10);
	}
	return (len);
}
