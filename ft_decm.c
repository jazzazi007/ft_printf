/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:29:02 by moaljazz          #+#    #+#             */
/*   Updated: 2024/09/30 20:29:05 by moaljazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decm(int numint)
{
	char	*num;

	num = ft_itoa(numint);
	ft_putstr_fd(num, 1);
	free(num);
	return (ft_numlen(numint, 10));
}
