/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 15:09:44 by azakizad          #+#    #+#             */
/*   Updated: 2022/06/24 08:20:04 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_lens(int n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*itoa_main_part(int n, char *str, size_t size)
{
	size_t	i;
	int		n_is_negative;

	str[size] = '\0';
	if (n < 0)
	{
		n_is_negative = 1;
		n = n * (-1);
	}
	else
		n_is_negative = 0;
	i = size - 1;
	while (i > 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	if (n_is_negative)
		str[0] = '-';
	else
		str[0] = n + '0';
	return (str);
}

/*
 * Function that converts an integer 'n' to a null-terminated string.
 */

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;

	size = ft_lens(n);
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	if (n == -2147483648)
		ft_memcpy(str, "-2147483648\0", size + 1);
	else
		str = itoa_main_part(n, str, size);
	return (str);
}
