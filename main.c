/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:04:11 by abouramt          #+#    #+#             */
/*   Updated: 2024/04/29 13:32:39 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ix_size(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) == 1)
		return ;
	if (ft_lstsize(*stack_a) == 2)
		swap_stack(stack_a, 'a', 1);
	else if (ft_lstsize(*stack_a) == 3)
		ft_sort_three(stack_a, 1);
	else if (ft_lstsize(*stack_a) == 4)
		ft_sort_four(stack_a, stack_b, 1);
	else if (ft_lstsize(*stack_a) == 5)
		ft_sort_five(stack_a, stack_b, 1);
	else if (ft_lstsize(*stack_a) > 5 && ft_lstsize(*stack_a) <= 100)
	{
		ft_push_to_b(stack_a, stack_b, 15, 1);
		ft_push_to_a(stack_a, stack_b, 1);
	}
	else
	{
		ft_push_to_b(stack_a, stack_b, 30, 1);
		ft_push_to_a(stack_a, stack_b, 1);
	}
}

int	main(int ac, char **av)
{
	int		j;
	char	*arr;
	char	**data;
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		return (0);
	ft_check_sign(av);
	ft_check_args(av);
	j = 1;
	arr = ft_strdup("");
	while (av[j])
	{
		arr = ft_strjoin(arr, av[j]);
		arr = ft_strjoin(arr, " ");
		j++;
	}
	data = ft_split(arr, ' ');
	(free(arr)), (ft_check_double(data)), (ft_add_new_(data, &stack_a));
	(ft_free(data)), (ft_index(&stack_a)), (ft_ix_size(&stack_a, &stack_b));
	*data = NULL;
	return (0);
}
