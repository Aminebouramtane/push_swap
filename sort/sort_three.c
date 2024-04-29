/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:43:45 by abouramt          #+#    #+#             */
/*   Updated: 2024/04/29 12:25:03 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	void	ft_move_values(t_list **stack, int mid, int min, int flag)
{
	int		max;

	max = ft_get_max(stack);
	if ((*stack)->content == mid \
	&& (*stack)->next->content == min && (*stack)->next->next->content == max)
		swap_stack(stack, 'a', flag);
	else if ((*stack)->content == max \
	&& (*stack)->next->content == mid && (*stack)->next->next->content == min)
	{
		rotate_stack(stack, 'a', flag);
		swap_stack(stack, 'a', flag);
	}
	else if ((*stack)->content == min \
	&& (*stack)->next->content == max && (*stack)->next->next->content == mid)
	{
		reverse_rotate(stack, 'a', flag);
		swap_stack(stack, 'a', flag);
	}
	else if ((*stack)->content == max \
	&& (*stack)->next->content == min && (*stack)->next->next->content == mid)
		rotate_stack(stack, 'a', flag);
	else if ((*stack)->content == mid \
	&& (*stack)->next->content == max && (*stack)->next->next->content == min)
		reverse_rotate(stack, 'a', flag);
}

void	ft_sort_three(t_list **stack, int flag)
{
	int		mid;
	int		min;
	int		size;

	min = ft_get_min(stack);
	mid = ft_get_mid(stack);
	size = ft_lstsize(*stack);
	if (!ft_sorted(stack))
		return ;
	else
		ft_move_values(stack, mid, min, flag);
}
