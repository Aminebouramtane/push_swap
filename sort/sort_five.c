
#include "../push_swap.h"


static	void	ft_min_in_three(t_list **stack_a, t_list **stack_b)
{
	rotate_stack(stack_a, 'a');
	swap_stack(stack_a, 'a');
	push_stack_b(stack_a, stack_b);
	ft_sort_four(stack_a, stack_b);
	push_stack_a(stack_a, stack_b);
}

static	void	ft_min_in_four(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a, 'a');
	reverse_rotate(stack_a, 'a');
	push_stack_b(stack_a, stack_b);
	ft_sort_four(stack_a, stack_b);
	push_stack_a(stack_a, stack_b);
}

static	void	ft_move_values(t_list **stack_a, t_list **stack_b, int min)
{
	if ((*stack_a)->content == min)
	{
		push_stack_b(stack_a, stack_b);
		ft_sort_four(stack_a, stack_b);
		push_stack_a(stack_a, stack_b);
	}
	else if ((*stack_a)->next->content == min)
	{
		swap_stack(stack_a, 'a');
		push_stack_b(stack_a, stack_b);
		ft_sort_four(stack_a, stack_b);
		push_stack_a(stack_a, stack_b);
	}
	else if ((*stack_a)->next->next->content == min)
		ft_min_in_three(stack_a, stack_b);
	else if ((*stack_a)->next->next->next->content == min)
		ft_min_in_four(stack_a, stack_b);
	else
	{
		reverse_rotate(stack_a, 'a');
		push_stack_b(stack_a, stack_b);
		ft_sort_four(stack_a, stack_b);
		push_stack_a(stack_a, stack_b);
	}
}

void	ft_sort_five(t_list **stack_a, t_list **stack_b)
{
	int		min;
	int		size;
	t_list	*tmp;

	min = ft_get_min(stack_a);
	tmp = (*stack_a);
	size = ft_lstsize(tmp);
	if (!ft_sorted(stack_a))
		return ;
	else if (size == 5)
		ft_move_values(stack_a, stack_b, min);
	else
		ft_sort_four(stack_a, stack_b);
}
