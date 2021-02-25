/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchiba <tchiba@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 12:03:16 by tchiba            #+#    #+#             */
/*   Updated: 2020/10/15 17:25:54 by tchiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ret;
	size_t	i;
	size_t	len;

	i = 0;
	len = count * size;
	if (!(ret = malloc(len)))
		return (NULL);
	while (i <= len)
	{
		ret[i] = 0;
		i++;
	}
	return ((void *)ret);
}
