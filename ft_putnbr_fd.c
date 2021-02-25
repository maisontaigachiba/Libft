/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchiba <tchiba@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 17:49:18 by tchiba            #+#    #+#             */
/*   Updated: 2020/10/22 17:52:31 by tchiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	un;

	un = (unsigned int)n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		un = (unsigned int)(-1 * n);
	}
	if (un > 9)
	{
		ft_putnbr_fd(un / 10, fd);
		ft_putchar_fd('0' + un % 10, fd);
	}
	else
		ft_putchar_fd('0' + un, fd);
}
