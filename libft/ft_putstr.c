/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvan-roo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 11:04:55 by gvan-roo          #+#    #+#             */
/*   Updated: 2017/05/29 11:14:59 by gvan-roo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int ctr;

	ctr = 0;
	while (s[ctr])
	{
		ft_putchar(s[ctr]);
		ctr++;
	}
}
