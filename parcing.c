/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:07:25 by abouramt          #+#    #+#             */
/*   Updated: 2024/04/27 13:35:54 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_double(char **data)
{
	int		i;
	int		j;

	j = 0;
	while (data[j])
	{
		i = j + 1;
		while (data[i])
		{
			if (ft_atoi(data[j]) == ft_atoi(data[i]))
			{
				write(2, "Error\n", 6);
				exit (1);
			}
			i++;
		}
		j++;
	}
}

void	ft_check_args_chars(char **str, int i, int j, int *flag)
{
	if ((!ft_isdigit(str[j][i]) && str[j][i] != ' ' \
	&& str[j][i] != '-' && str[j][i] != '+'))
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	if (ft_isdigit(str[j][i]))
		*flag = 1;
}

void	ft_check_args(char **str)
{
	int		i;
	int		j;
	int		flag;

	j = 1;
	while (str[j])
	{
		flag = 0;
		i = 0;
		if (str[j] && ! str[j][i])
		{
			write(2, "Error\n", 6);
			exit (1);
		}
		while (str[j][i])
			ft_check_args_chars(str, i++, j, &flag);
		j++;
	}
	if (flag == 0)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}

void	ft_check_sign(char **data)
{
	int	i;
	int	j;

	j = 1;
	while (data[j])
	{
		i = 0;
		while (data[j][i])
		{
			if ((data[j][i] == '+' && data[j][i + 1] == '+') \
			|| (data[j][i] == '-' && data[j][i + 1] == '-'))
			{
				write(2, "Error\n", 6);
				exit(1);
			}
			i++;
		}
		j++;
	}
}
