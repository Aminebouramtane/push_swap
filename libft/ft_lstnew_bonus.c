/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 03:41:52 by abouramt          #+#    #+#             */
/*   Updated: 2024/04/22 06:44:27 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int content)
{
	t_list	*my_node;

	my_node = (t_list *)malloc(sizeof(t_list));
	if (my_node == NULL)
		return (NULL);
	my_node->content = content;
	my_node->next = NULL;
	return (my_node);
}
