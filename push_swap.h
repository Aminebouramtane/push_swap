/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:07:39 by abouramt          #+#    #+#             */
/*   Updated: 2024/04/26 11:50:01 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./tools/libft/libft.h"

typedef struct push_swap
{
	char	*arr;
}		t_data;

char	*ft_check_double(char **data);
void	ft_check_args(char **str);
void	ft_check_sign(char **data);
void	ft_add_new_(char	**data, t_list **stack_a);
void	swap_stack(t_list **stack_a, char c);
void	ss(t_list **stack_a, t_list **stack_b);
void	push_stack_a(t_list **stack_a, t_list **stack_b);
void	push_stack_b(t_list **stack_a, t_list **stack_b);
void	rotate_stack(t_list **stack, char c);
void	rr(t_list **stack_a, t_list **stack_b);
void	reverse_rotate(t_list **stack, char c);
void	rrr(t_list **stack_a, t_list **stack_b);
int		ft_sorted(t_list **stack);
void	ft_sort_three(t_list **stack);
int		ft_sorted(t_list **stack);
int		ft_get_max(t_list **stack);
int		ft_get_min(t_list **stack);
int		ft_get_mid(t_list **stack);
void	ft_sort_four(t_list **stack_a, t_list **stack_b);
void	ft_sort_five(t_list **stack_a, t_list **stack_b);
void	ft_index(t_list **stack);
void	ft_push_to_b(t_list **stack_a, t_list **stack_b, int range);
int		ft_position(t_list **stack ,int max);
void	ft_push_to_a(t_list **stack_a, t_list **stack_b);

#endif
