/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:20:26 by kcosta            #+#    #+#             */
/*   Updated: 2018/09/19 13:25:03 by kcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tests.h"

extern int	ft_putnbr(int n);
static void simple_test(void)
{
	// int		out;
	// int		p[2];
	// char	buf[4];

	printf("---- %d ---\n", ft_putnbr(-42));
	// out = dup(1);
	// pipe(p);
	// dup2(p[1], 1);
	// ft_putnbr(42);
	// dup2(out, 1);
	// read(p[0], buf, 3);
	// buf[3] = 0;
	// close(p[0]);
	// close(p[1]);
	// close(out);
	// assert(strcmp(buf, "42") == 0);
}

void	ft_putnbr_test(void)
{
	printf("Test 01: ");
	simple_test();
	printf("OK\n");
}
