/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:20:26 by kcosta            #+#    #+#             */
/*   Updated: 2018/09/25 14:29:47 by kcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tests.h"

extern int	ft_puts(const char *s);
static void simple_test(void)
{
	ft_puts("qwertyuiopasdfghjklzxcvbnm");
}

void	ft_puts_test(void)
{
	write(1, "Test 01: Should print \"qwertyuiopasdfghjklzxcvbnm\" : ", 53);
	simple_test();
	dprintf(1, "OK\n");
}
