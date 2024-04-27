/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:43:45 by abouramt          #+#    #+#             */
/*   Updated: 2024/04/25 11:41:52 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	void	ft_move_values(t_list **stack, int max, int mid, int min)
{
	if ((*stack)->content == mid \
	&& (*stack)->next->content == min && (*stack)->next->next->content == max)
		swap_stack(stack, 'a');
	else if ((*stack)->content == max \
	&& (*stack)->next->content == mid && (*stack)->next->next->content == min)
	{
		rotate_stack(stack, 'a');
		swap_stack(stack, 'a');
	}
	else if ((*stack)->content == min \
	&& (*stack)->next->content == max && (*stack)->next->next->content == mid)
	{
		reverse_rotate(stack, 'a');
		swap_stack(stack, 'a');
	}
	else if ((*stack)->content == max \
	&& (*stack)->next->content == min && (*stack)->next->next->content == mid)
		rotate_stack(stack, 'a');
	else if ((*stack)->content == mid \
	&& (*stack)->next->content == max && (*stack)->next->next->content == min)
		reverse_rotate(stack, 'a');
}

void	ft_sort_three(t_list **stack)
{
	int		max;
	int		mid;
	int		min;
	int		size;

	max = ft_get_max(stack);
	min = ft_get_min(stack);
	mid = ft_get_mid(stack);
	size = ft_lstsize(*stack);
	if (!ft_sorted(stack))
		return ;
	else if (size == 3)
		ft_move_values(stack, max, mid, min);
	else
		swap_stack(stack, 'a');
}
