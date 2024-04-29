/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:20:10 by abouramt          #+#    #+#             */
/*   Updated: 2024/04/29 12:02:03 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_stack(t_list **stack, char c, int flag)
{
	t_list	*tmp;

	if (!*stack || !(*stack)->next)
		return ;
	else
	{
		tmp = *stack;
		*stack = (*stack)->next;
		tmp->next = NULL;
		ft_lstadd_back(stack, tmp);
		if (flag)
		{
			if (c == 'a')
				write(1, "ra\n", 3);
			else if (c == 'b')
				write(1, "rb\n", 3);
		}
	}
}

void	rr(t_list **stack_a, t_list **stack_b, int flag)
{
	rotate_stack(stack_a, 'a', flag);
	rotate_stack(stack_b, 'b', flag);
	if (flag)
		write(1, "rr\n", 3);
}
