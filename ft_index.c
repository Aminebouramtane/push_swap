/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:44:37 by abouramt          #+#    #+#             */
/*   Updated: 2024/04/27 11:44:50 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

static	void	ft__sort(int *tab, int size)
{
	int		i;
	int		j;
	int		my_tmp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] < tab[j])
			{
				my_tmp = tab[j];
				tab[j] = tab[i];
				tab[i] = my_tmp;
			}
			j++;
		}
		i++;
	}
}

int	*ft_add_in_tab(t_list **stack)
{
	t_list	*tmp;
	int		size;
	int		*tab;
	int		i;

	size = ft_lstsize(*stack);
	tmp = *stack;
	tab = malloc(sizeof(int) * size);
	i = 0;
	while (tmp)
	{
		tab[i] = tmp->content;
		tmp = tmp->next;
		i++;
	}
	ft__sort(tab, size);
	return (tab);
}

void	ft_index(t_list **stack)
{
	int		*tab;
	int		i;
	t_list	*tmp;
	int		j;

	tab = ft_add_in_tab(stack);
	i = 0;
	j = 0;
	while (i < ft_lstsize(*stack))
	{
		tmp = *stack;
		while (i < ft_lstsize(*stack))
		{
			if (tab[i] == tmp->content)
			{
				tmp->index = i;
				break ;
			}
			tmp = tmp->next;
		}
		i++;
	}
}
