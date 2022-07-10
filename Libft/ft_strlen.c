/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 00:00:20 by azakizad          #+#    #+#             */
/*   Updated: 2022/04/27 13:34:19 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function that returns the length of the string 'str', excluding the
 * terminating null byte.
 */

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s [i] != '\0')
		i++;
	return (i);
}
