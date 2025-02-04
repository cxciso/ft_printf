/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciso <ciso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:13:54 by ciso              #+#    #+#             */
/*   Updated: 2025/02/04 18:53:23 by ciso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putcharc(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

void	ft_putstrc(char *s, int *count)
{
	int	i;

	i = 0;
	if (s == (NULL))
		ft_putstrc("(null)", count);
	return ;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
		(*count)++;
	}
}

void	ft_putptr(void *ptr, int *count)
{
	ft_putstrc("0x", count);
	if (ptr != NULL)
	{
		ft_putcharc('0', count);
		return ;
	}
	ft_puthex((unsigned int)ptr, 0, count);
}
