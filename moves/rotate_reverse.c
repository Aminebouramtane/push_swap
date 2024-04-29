/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:20:26 by abouramt          #+#    #+#             */
/*   Updated: 2024/04/29 12:01:00 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_list **stack, char c, int flag)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *stack;
	tmp2 = *stack;
	if (!*stack || !(*stack)->next)
		return ;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		while (tmp2->next->next)
			tmp2 = tmp2->next;
		tmp2->next = NULL;
		ft_lstadd_front(stack, tmp);
		if (flag)
		{
			if (c == 'a')
				write(1, "rra\n", 4);
			else if (c == 'b')
				write(1, "rrb\n", 4);
		}
	}
}

void	rrr(t_list **stack_a, t_list **stack_b, int flag)
{
	reverse_rotate(stack_a, 'a', flag);
	reverse_rotate(stack_b, 'b', flag);
	if (flag)
		write(1, "rrr\n", 4);
}
