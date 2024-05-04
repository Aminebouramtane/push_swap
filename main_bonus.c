/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:04:11 by abouramt          #+#    #+#             */
/*   Updated: 2024/05/04 06:40:13 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	ft_print_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_aplly(t_list **stack_a, t_list **stack_b, char *line, int flag)
{
	if (ft_strncmp(line, "sa\n", ft_strlen(line)) == 0)
		swap_stack(stack_a, 'a', flag);
	else if (ft_strncmp(line, "sb\n", ft_strlen(line)) == 0)
		swap_stack(stack_b, 'b', flag);
	else if (ft_strncmp(line, "ss\n", ft_strlen(line)) == 0)
		ss(stack_a, stack_b, flag);
	else if (ft_strncmp(line, "pa\n", ft_strlen(line)) == 0)
		push_stack_a(stack_a, stack_b, flag);
	else if (ft_strncmp(line, "pb\n", ft_strlen(line)) == 0)
		push_stack_b(stack_a, stack_b, flag);
	else if (ft_strncmp(line, "ra\n", ft_strlen(line)) == 0)
		rotate_stack(stack_a, 'a', flag);
	else if (ft_strncmp(line, "rb\n", ft_strlen(line)) == 0)
		rotate_stack(stack_b, 'b', flag);
	else if (ft_strncmp(line, "rr\n", ft_strlen(line)) == 0)
		rr(stack_a, stack_b, flag);
	else if (ft_strncmp(line, "rra\n", ft_strlen(line)) == 0)
		reverse_rotate(stack_a, 'a', flag);
	else if (ft_strncmp(line, "rrb\n", ft_strlen(line)) == 0)
		reverse_rotate(stack_b, 'b', flag);
	else if (ft_strncmp(line, "rrr\n", ft_strlen(line)) == 0)
		rrr(stack_a, stack_b, flag);
	else
		ft_print_error();
}

void	ft_check_line(t_list **stack_a, t_list **stack_b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		ft_aplly(stack_a, stack_b, line, 0);
		free(line);
		line = get_next_line(0);
	}
	if (!ft_sorted(stack_a) && ft_lstsize(*stack_b) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
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
	(ft_free(data)), (ft_check_line(&stack_a, &stack_b));
	return (0);
}
