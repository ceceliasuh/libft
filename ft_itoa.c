/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesuh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 10:58:15 by cesuh             #+#    #+#             */
/*   Updated: 2018/07/22 11:17:46 by cesuh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nbrlen(int n)
{
	int		i;
	long	nbr;

	nbr = (long)n;
	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		i++;
		nbr *= -1;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	long	num;
	int		i;
	int		len;
	char	*nbr;

	num = (long)n;
	i = 0;
	len = ft_nbrlen(num);
	if (!(nbr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	nbr[len--] = '\0';
	if (n == 0)
		nbr[0] = '0';
	if (num < 0)
	{
		nbr[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		nbr[len--] = ((num % 10) + '0');
		num /= 10;
	}
	return (nbr);
}
