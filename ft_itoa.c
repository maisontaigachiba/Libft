/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchiba <tchiba@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 16:35:35 by tchiba            #+#    #+#             */
/*   Updated: 2020/10/22 17:12:09 by tchiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*ret;
	char	*p;
	char	i[21];
	int		flg;

	ft_bzero(i, 21);
	p = i + 20;
	flg = ((n < 0) ? 1 : 0);
	if (n == 0 || n == -0)
		*--p = '0';
	while (n != 0)
	{
		if (n > 0)
			*--p = '0' + (n % 10);
		else if (n < 0)
			*--p = '0' - (n % 10);
		n /= 10;
	}
	if (flg)
		*--p = '-';
	if (!(ret = (char *)malloc(sizeof(char) * ft_strlen(p) + 1)))
		return (NULL);
	ft_strlcpy(ret, p, ft_strlen(p) + 1);
	return (ret);
}
