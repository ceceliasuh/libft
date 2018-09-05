/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesuh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 23:27:51 by cesuh             #+#    #+#             */
/*   Updated: 2018/07/18 23:34:41 by cesuh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*new_dst;
	char	*new_src;
	size_t	i;

	i = -1;
	new_dst = (char *)dst;
	new_src = (char *)src;
	if (new_src < new_dst)
	{
		while (len > 0)
		{
			new_dst[len - 1] = new_src[len - 1];
			len--;
		}
	}
	else
	{
		while (++i < len)
			new_dst[i] = new_src[i];
	}
	return (dst);
}
