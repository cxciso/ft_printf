/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciso <ciso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:47:55 by ciso              #+#    #+#             */
/*   Updated: 2025/01/21 20:13:26 by ciso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#include "ft_printf.h"

void ft_putcharc(char c, int *count);
void	ft_putnbrc(int n, int *count);
void	ft_putstrc(char *s, int *count);
void    ft_putunsigned(unsigned int i, int *count);
void ft_puthex(unsigned int n, int uppercase, int *count);


#endif