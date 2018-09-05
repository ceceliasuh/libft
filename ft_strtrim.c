/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesuh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 03:13:21 by cesuh             #+#    #+#             */
/*   Updated: 2018/08/09 03:15:54 by cesuh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	beg_isspace(char const *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	return (i);
}

static int	end_isspace(char const *str)
{
	int i;

	i = ft_strlen(str);
	if (i == 0)
		return (0);
	while (i > 0 && (str[i - 1] == ' ' || str[i - 1] == '\t' ||
				str[i - 1] == '\n'))
		i--;
	return (i);
}

char		*ft_strtrim(char const *s)
{
	int		start;
	int		str_len;
	char	*str;

	if (!s)
		return (NULL);
	start = beg_isspace(s);
	str_len = end_isspace(s) - start;
	if (str_len <= 0)
		return (ft_strnew(0));
	str = ft_strsub(s, start, str_len);
	return (str);
}
