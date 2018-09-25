/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:20:26 by kcosta            #+#    #+#             */
/*   Updated: 2018/09/25 14:31:39 by kcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tests.h"

extern void	ft_putnbr(int n);
static void simple_test(void)
{
	ft_putnbr(42);
}

void	ft_putnbr_test(void)
{
	write(1, "Test 01: Should print \"42\" : \"", 30);
	simple_test();
	dprintf(1, "\"\nOK\n");
}
