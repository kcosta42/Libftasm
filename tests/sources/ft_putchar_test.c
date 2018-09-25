/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:20:26 by kcosta            #+#    #+#             */
/*   Updated: 2018/09/25 14:31:35 by kcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tests.h"

extern void	ft_putchar(char c);
static void simple_test(void)
{
	ft_putchar('a');
}

void	ft_putchar_test(void)
{
	write(1, "Test 01: Should print \"a\" : \"", 29);
	simple_test();
	dprintf(1, "\"\nOK\n");
}
