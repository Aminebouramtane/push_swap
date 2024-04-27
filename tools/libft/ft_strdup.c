/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:30:09 by abouramt          #+#    #+#             */
/*   Updated: 2023/11/09 20:17:32 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*tab;

	i = ft_strlen(s1);
	tab = (char *)malloc(sizeof(char) * (i + 1));
	if (tab == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		tab[j] = s1[j];
		j++;
	}
	tab[j] = '\0';
	return (tab);
}
