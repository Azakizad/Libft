/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 22:38:08 by azakizad          #+#    #+#             */
/*   Updated: 2022/06/25 09:24:07 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function that returns a pointer to the last element of the list 'lst'.
 */

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*head;

	head = lst;
	if (head == NULL)
		return (NULL);
	while (head->next != NULL)
	{
		head = head->next;
	}
	return (head);
}
