/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:20:44 by abouramt          #+#    #+#             */
/*   Updated: 2024/04/29 12:43:26 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_stack(t_list **stack_a, char c, int flag)
{
	t_list		*tmp;
	t_list		*tmp2;

	if (!stack_a || !*stack_a)
		return ;
	if (!(*stack_a)->next)
		return ;
	else
	{
		tmp = *stack_a;
		tmp2 = (*stack_a)->next;
		*stack_a = tmp2->next;
		ft_lstadd_front(stack_a, tmp);
		ft_lstadd_front(stack_a, tmp2);
		if (flag)
		{
			if (c == 'a')
				write(1, "sa\n", 3);
			else if (c == 'b')
				write(1, "sb\n", 3);
		}
	}
}

void	ss(t_list **stack_a, t_list **stack_b, int flag)
{
	swap_stack(stack_a, 'a', flag);
	swap_stack(stack_b, 'b', flag);
	if (flag)
		write(1, "ss\n", 3);
}
