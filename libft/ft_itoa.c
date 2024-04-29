/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:55:12 by abouramt          #+#    #+#             */
/*   Updated: 2023/11/25 14:34:34 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*convert(long num, int is_negative)
{
	int		digits;
	char	*str;

	digits = count_digits(num);
	if (digits == 0)
		digits = 1;
	if (is_negative)
		digits++;
	str = (char *)malloc(sizeof(char) * (digits + 1));
	if (!str)
		return (NULL);
	str[digits--] = '\0';
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		str[digits--] = (num % 10) + '0';
		num /= 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	long	num;
	int		is_negative;
	char	*str;

	num = n;
	is_negative = 0;
	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}
	str = convert(num, is_negative);
	return (str);
}
