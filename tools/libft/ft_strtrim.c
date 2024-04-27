/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:47:32 by abouramt          #+#    #+#             */
/*   Updated: 2023/11/17 02:12:08 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	find_sep(int str, char const *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (str == sep[i])
			return (1);
		i++;
	}
	return (0);
}

static	char	*start_str(char const *str, char const *sep)
{
	while (*str && find_sep(*str, sep))
		str++;
	return ((char *)str);
}

static	int	end_str(char const *str, char const *sep)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (i >= 0 && find_sep(str[i], sep))
		i--;
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*ptr;
	int		i;

	if (!s1 || !set)
		return (NULL);
	if (!*s1)
		return (ft_strdup(""));
	str = start_str(s1, set);
	if (*str == '\0')
		return (ft_strdup(""));
	i = end_str(str, set);
	ptr = ft_calloc(i + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, str, i + 1);
	return (ptr);
}
