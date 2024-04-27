#include "tools/libft/libft.h"
void	ft_add_new_(char	**data, t_list **stack_a)
{
	int	j;

	j = 0;
	while (data[j])
		ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(data[j++])));
}
