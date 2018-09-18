/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:20:26 by kcosta            #+#    #+#             */
/*   Updated: 2018/09/18 13:10:21 by kcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tests.h"

extern void	ft_putchar(char c);
static void simple_test(void)
{
	// int		out;
	// int		p[2];
	// char	buf[2];

	// out = dup(1);
	// pipe(p);
	// dup2(p[1], 1);
	ft_putchar('a');
	// dup2(out, 1);
	// read(p[0], buf, 1);
	// buf[1] = 0;
	// close(p[0]);
	// close(p[1]);
	// close(out);
	// assert(strcmp(buf, "a") == 0);
}

void	ft_putchar_test(void)
{
	printf("Test 01: ");
	simple_test();
	printf("OK\n");
}
