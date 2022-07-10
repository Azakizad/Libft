/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:47:55 by azakizad          #+#    #+#             */
/*   Updated: 2022/06/24 08:21:45 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function that writes the string 's' to the file descriptor 'fd',
 * followed by a newline character.
 */

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
	{
		write (fd, s, ft_strlen(s));
		write (fd, "\n", 1);
	}
}
