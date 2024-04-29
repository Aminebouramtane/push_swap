/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:02:42 by abouramt          #+#    #+#             */
/*   Updated: 2024/04/29 12:19:14 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	void	ft_min_in_three(t_list **stack_a, t_list **stack_b, int flag)
{
	rotate_stack(stack_a, 'a', flag);
	swap_stack(stack_a, 'a', flag);
	push_stack_b(stack_a, stack_b, flag);
	ft_sort_four(stack_a, stack_b, flag);
	push_stack_a(stack_a, stack_b, flag);
}

static	void	ft_min_in_four(t_list **stack_a, t_list **stack_b, int flag)
{
	reverse_rotate(stack_a, 'a', flag);
	reverse_rotate(stack_a, 'a', flag);
	push_stack_b(stack_a, stack_b, flag);
	ft_sort_four(stack_a, stack_b, flag);
	push_stack_a(stack_a, stack_b, flag);
}

static	void	ft_move_values(t_list **stack_a, \
	t_list **stack_b, int min, int flag)
{
	if ((*stack_a)->content == min)
	{
		push_stack_b(stack_a, stack_b, flag);
		ft_sort_four(stack_a, stack_b, flag);
		push_stack_a(stack_a, stack_b, flag);
	}
	else if ((*stack_a)->next->content == min)
	{
		swap_stack(stack_a, 'a', flag);
		push_stack_b(stack_a, stack_b, flag);
		ft_sort_four(stack_a, stack_b, flag);
		push_stack_a(stack_a, stack_b, flag);
	}
	else if ((*stack_a)->next->next->content == min)
		ft_min_in_three(stack_a, stack_b, flag);
	else if ((*stack_a)->next->next->next->content == min)
		ft_min_in_four(stack_a, stack_b, flag);
	else
	{
		reverse_rotate(stack_a, 'a', flag);
		push_stack_b(stack_a, stack_b, flag);
		ft_sort_four(stack_a, stack_b, flag);
		push_stack_a(stack_a, stack_b, flag);
	}
}

void	ft_sort_five(t_list **stack_a, t_list **stack_b, int flag)
{
	int		min;
	int		size;
	t_list	*tmp;

	min = ft_get_min(stack_a);
	tmp = (*stack_a);
	size = ft_lstsize(tmp);
	if (!ft_sorted(stack_a))
		return ;
	else
		ft_move_values(stack_a, stack_b, min, flag);
}
