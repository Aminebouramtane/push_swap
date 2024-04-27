/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:02:33 by abouramt          #+#    #+#             */
/*   Updated: 2024/04/22 06:55:15 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, int (*f)(int), void (*del)(int))
{
	t_list	*head;
	t_list	*tmp;
	int		p;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		p = f(lst->content);
		tmp = ft_lstnew(p);
		if (!tmp)
		{
			ft_lstclear(&head, del);
			del(p);
		}
		ft_lstadd_back(&head, tmp);
		lst = lst->next;
	}
	return (head);
}
