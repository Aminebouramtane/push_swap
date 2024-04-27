/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:19:54 by abouramt          #+#    #+#             */
/*   Updated: 2024/04/26 11:20:04 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_stack_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (!*stack_a)
		return ;
	else
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		ft_lstadd_front(stack_b, tmp);
		write(1, "pb\n", 3);
	}
}

void	push_stack_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (!*stack_b)
		return ;
	else
	{
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		ft_lstadd_front(stack_a, tmp);
		write(1, "pa\n", 3);
	}
}
