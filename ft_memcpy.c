/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchiba <tchiba@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 14:41:45 by tchiba            #+#    #+#             */
/*   Updated: 2020/10/12 13:16:32 by tchiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	if (n == 0 || dst == src)
		return (dst);
	i = 0;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dst);
}
