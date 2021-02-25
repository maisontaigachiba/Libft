/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchiba <tchiba@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 13:37:08 by tchiba            #+#    #+#             */
/*   Updated: 2020/10/15 14:33:52 by tchiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t len_d;

	if (size == 0)
		return (ft_strlen(src));
	len_d = ft_strlen(dest);
	if (size <= len_d)
		return (ft_strlen(src) + size);
	i = len_d;
	j = 0;
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len_d + ft_strlen(src));
}
