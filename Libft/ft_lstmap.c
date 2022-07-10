/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 01:14:41 by azakizad          #+#    #+#             */
/*   Updated: 2022/06/24 08:21:01 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function that iterates through the list 'lst' and creates a copy of the
 * whole list, where the function 'f' is applied to the content of each
 * element. If needed, the function 'del' is used to delete the content of
 * an element.
 */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_element;

	if (lst == NULL || f == NULL)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	if (new_lst == NULL)
	{
		ft_lstclear(&new_lst, del);
		return (NULL);
	}
	lst = lst->next;
	while (lst != NULL)
	{
		new_element = ft_lstnew(f(lst->content));
		if (new_element == NULL)
		{
			ft_lstclear(&new_lst, del);
			ft_lstclear(&new_element, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_element);
		lst = lst->next;
	}
	return (new_lst);
}
