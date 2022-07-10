/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 18:54:37 by azakizad          #+#    #+#             */
/*   Updated: 2022/07/02 14:38:09 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_format(va_list ap, const char format)
{
	int	x;

	x = 0;
	if (format == 'c')
		x += ft_putchar(va_arg(ap, int));
	else if (format == 's')
		x += ft_printstr(va_arg(ap, char *));
	else if (format == 'p')
		x += ft_printptr(va_arg(ap, unsigned long long));
	else if (format == 'd' || format == 'i')
		x += ft_putnbr(va_arg(ap, int));
	else if (format == 'u')
		x += ft_printnbru(va_arg(ap, unsigned int));
	else if (format == 'x' || format == 'X')
		x += ft_printhex(va_arg(ap, unsigned int), format);
	else if (format == '%')
		x += ft_print_precent();
	return (x);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		x;
	int		i;

	x = 0;
	i = 0;
	va_start(ap, format);
	if (format == NULL)
		return (0);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			x += ft_putchar(format[i]);
		}
		else
		{
			x += ft_format(ap, format[i + 1]);
			i++;
		}
		i++;
	}
	return (x);
	va_end(ap);
}
