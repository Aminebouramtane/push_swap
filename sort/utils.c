/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:30:44 by abouramt          #+#    #+#             */
/*   Updated: 2024/04/26 12:16:44 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_sorted(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	while (tmp && tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

int	ft_get_max(t_list **stack)
{
	t_list	*tmp;
	int		max;

	tmp = (*stack);
	max = (*stack)->content;
	while (tmp)
	{
		if (tmp->content > max)
			max = tmp->content;
		tmp = tmp->next;
	}
	return (max);
}

int	ft_get_min(t_list **stack)
{
	t_list	*tmp;
	int		min;

	tmp = (*stack);
	min = (*stack)->content;
	while (tmp)
	{
		if (tmp->content < min)
			min = tmp->content;
		tmp = tmp->next;
	}
	return (min);
}

int	ft_position(t_list **stack, int max)
{
	t_list	*tmp;
	int		i;
	int		index;

	tmp = *stack;
	i = 0;
	index = 0;
	while (tmp)
	{
		if (tmp->content == max)
			index = i;
		tmp = tmp->next;
		i++;
	}
	return (index);
}

int	ft_get_mid(t_list **stack)
{
	t_list	*tmp;
	int		max;
	int		mid;
	int		min;

	max = ft_get_max(stack);
	min = ft_get_min(stack);
	tmp = (*stack);
	mid = (*stack)->content;
	while (tmp)
	{
		if (tmp->content < max && tmp->content > min)
			mid = tmp->content;
		tmp = tmp->next;
	}
	return (mid);
}
