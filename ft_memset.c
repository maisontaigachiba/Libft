/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchiba <tchiba@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 17:54:54 by tchiba            #+#    #+#             */
/*   Updated: 2020/10/14 14:06:37 by tchiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t len)
{
	unsigned	char	*uc;
	size_t				i;

	uc = (unsigned char *)buf;
	i = 0;
	while (i < len)
	{
		uc[i] = (unsigned char)ch;
		i++;
	}
	return (buf);
}
