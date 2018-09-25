/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:18:51 by kcosta            #+#    #+#             */
/*   Updated: 2018/09/25 14:29:30 by kcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tests.h"

extern void	*ft_memset(void *b, int c, size_t len);
static void unittest1(void)
{
	char	b1[100], b2[100];

	ft_memset(b1, 42, 100);
	memset(b2, 42, 100);
	assert(memset(b1, 99, 0) == ft_memset(b1, 99, 0));
	assert(memcmp(b1, b2, 100) == 0);
	b1[0] = 1;
	ft_memset(b1, 0, 0);
	assert(b1[0] == 1);
}

static void unittest2(void)
{
	assert(memcmp(memset(strdup("abcd"), 'A', 5), ft_memset(strdup("abcd"), 'A', 5), 5) == 0);
}

static void unittest3(void)
{
	assert(memcmp(memset(strdup("abcd"), 0, 0), ft_memset(strdup("abcd"), 0, 0), 5) == 0);
}

void	ft_memset_test(void)
{
	dprintf(1, "Test 01: ");
	unittest1();
	dprintf(1, "OK\nTest 02: ");
	unittest2();
	dprintf(1, "OK\nTest 03: ");
	unittest3();
	dprintf(1, "OK\n");
}
