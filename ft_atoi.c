/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchiba <tchiba@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 12:07:16 by tchiba            #+#    #+#             */
/*   Updated: 2020/10/15 18:27:46 by tchiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int			i;
	int			sign_cnt;
	long long	num;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign_cnt = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign_cnt *= -1;
		i++;
	}
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i++] - '0';
		if (sign_cnt == -1 && num > 2147483648)
			return (0);
		if (sign_cnt == 1 && num > 2147483647)
			return (-1);
	}
	num *= sign_cnt;
	return ((int)num);
}
