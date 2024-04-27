/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:16:46 by abouramt          #+#    #+#             */
/*   Updated: 2024/04/26 12:17:24 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_to_b(t_list **stack_a, t_list **stack_b, int range)
{
	int		i;

	i = 0;
	while (ft_lstsize(*stack_a))
	{
		if ((*stack_a)->index <= i)
		{
			push_stack_b(stack_a, stack_b);
			rotate_stack(stack_b, 'b');
			i++;
		}
		else if ((*stack_a)->index <= i + range)
		{
			push_stack_b(stack_a, stack_b);
			i++;
		}
		else
			rotate_stack(stack_a, 'a');
	}
}

void	ft_push_to_a(t_list **stack_a, t_list **stack_b)
{
	int		max;
	int		size;
	int		index;
	// t_list	*tmp;

	size = ft_lstsize(*stack_b);
	while (size)
	{
		max = ft_get_max(stack_b);
		while (1)
		{
			index = ft_position(stack_b , max);
			printf("%d\n", index);
			if (index == 0)
			{
				push_stack_a(stack_a, stack_b);
				break;
			}
			if (index <= size / 2)
				rotate_stack(stack_b, 'b');
			else
				reverse_rotate(stack_b, 'b');

		}
		size--;
	}
}
