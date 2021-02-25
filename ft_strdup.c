/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchiba <tchiba@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 08:42:54 by tchiba            #+#    #+#             */
/*   Updated: 2020/10/15 17:28:49 by tchiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*str;
	int		count;
	int		i;

	count = ft_strlen(src);
	if (!(str = (char *)malloc(count + 1)))
		return (NULL);
	i = 0;
	while (i < count)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
