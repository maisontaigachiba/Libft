/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchiba <tchiba@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 14:35:44 by tchiba            #+#    #+#             */
/*   Updated: 2020/10/23 12:15:45 by tchiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_strcnt(char const *s, char c)
{
	int	i;
	int	str_cnt;
	int	flg;

	i = 0;
	str_cnt = 0;
	flg = 1;
	if (s[i] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			flg = 1;
		else if (flg == 1)
		{
			flg = 0;
			str_cnt++;
		}
		i++;
	}
	return (str_cnt);
}

static	int		ft_charcnt(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static	void	ft_allfree(char **dst, int i)
{
	while (i > 0)
	{
		free(dst[i]);
		i--;
	}
	free(dst);
}

static	void	ft_substr_fill(char const *s, char c, char **dst, int str_cnt)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] && j < str_cnt)
	{
		while (s[i] == c)
			i++;
		if (!(dst[j] = (char *)malloc(ft_charcnt(s, c, i) + 1)))
		{
			ft_allfree(dst, j);
			*dst = NULL;
			return ;
		}
		ft_strlcpy(dst[j], &s[i], ft_charcnt(s, c, i) + 1);
		i += ft_charcnt(s, c, i);
		j++;
	}
}

char			**ft_split(char const *s, char c)
{
	char	**ret;
	int		str_cnt;

	if (s == '\0')
		return (NULL);
	str_cnt = ft_strcnt(s, c);
	if (!(ret = (char **)malloc(sizeof(char *) * str_cnt + 1)))
		return (NULL);
	ret[str_cnt] = NULL;
	ft_substr_fill(s, c, ret, str_cnt);
	return (ret);
}
