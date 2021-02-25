/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchiba <tchiba@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 13:17:42 by tchiba            #+#    #+#             */
/*   Updated: 2020/10/17 19:13:53 by tchiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int				i;
	unsigned int	size;
	char			*start;
	char			*end;
	char			*str;

	if (s1 == '\0' || set == '\0')
		return (NULL);
	i = 0;
	while (s1[i] && ft_isset(s1[i], set))
		i++;
	start = (char *)&s1[i];
	if ((i = ft_strlen(s1) - 1) != -1)
		while (i >= 0 && ft_isset(s1[i], set))
			i--;
	end = (char *)&s1[i];
	if (!*s1 || end == start)
		size = 2;
	else
		size = end - start + 2;
	if (!(str = malloc(sizeof(char) * size)))
		return (NULL);
	ft_strlcpy(str, start, size);
	return (str);
}
