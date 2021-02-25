/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchiba <tchiba@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 00:47:17 by tchiba            #+#    #+#             */
/*   Updated: 2020/10/15 15:16:10 by tchiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t len_n;
	size_t n;

	len_n = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	n = 0;
	while (*haystack != '\0' && len >= len_n)
	{
		if (n + len_n > len)
			return (NULL);
		if (*haystack == *needle && ft_memcmp(haystack, needle, len_n) == 0)
			return ((char *)haystack);
		haystack++;
		n++;
	}
	return (NULL);
}
