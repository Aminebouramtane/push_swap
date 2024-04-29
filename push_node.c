/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:28:13 by abouramt          #+#    #+#             */
/*   Updated: 2024/04/27 16:45:57 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ft_add_new_(char	**data, t_list **stack_a)
{
	int	j;

	j = 0;
	while (data[j])
		ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(data[j++])));
}

void	ft_join_my_arr(char **str, char *arr)
{
	int	j;

	j = 1;
	while (str[j])
	{
		arr = ft_strjoin(arr, str[j]);
		arr = ft_strjoin(arr, " ");
		j++;
	}
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		str[i] = NULL;
		i++;
	}
	free(str);
	str = NULL;
}
