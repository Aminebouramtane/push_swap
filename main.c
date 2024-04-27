/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:04:11 by abouramt          #+#    #+#             */
/*   Updated: 2024/04/26 12:10:52 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void test(t_list *stack_a, t_list *stack_b)
{
	printf(" ==========> stack_a <============== \n");
		while (stack_a)
		{
			printf("%d\n" ,stack_a->content);
			stack_a = stack_a->next;
		}
		printf(" ==========> stack_b <============== \n");
		while (stack_b)
		{
			printf("%d\n" ,stack_b->content);
			stack_b = stack_b->next;
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
	if (ac >= 2)
	{
		ft_check_sign(av);
		ft_check_args(av);
		j = 1;
		while (av[j])
		{
			arr = ft_strjoin(arr, av[j]);
			arr = ft_strjoin(arr, " ");
			j++;
		}
		data = ft_split(arr, ' ');
		j = 0;
		ft_check_double(data);
		ft_add_new_(data, &stack_a);
		// test(stack_a, stack_b);
		// ft_sorted(&stack_a);
		// ft_sort_five(&stack_a, &stack_b);
		ft_index(&stack_a);
		ft_push_to_b(&stack_a, &stack_b, 15);
		ft_push_to_a(&stack_a, &stack_b);
		test(stack_a, stack_b);
	}
	return (0);
}
