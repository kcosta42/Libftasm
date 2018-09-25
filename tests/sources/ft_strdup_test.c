/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:23:51 by kcosta            #+#    #+#             */
/*   Updated: 2018/09/25 14:30:08 by kcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tests.h"

extern char	*ft_strdup(const char *s1);
static void unittest1(void)
{
	assert(strcmp(ft_strdup("aaaaa"), "aaaaa") == 0);
}

static void unittest2(void)
{
	assert(strcmp(ft_strdup(""), "") == 0);
}

static void unittest3(void)
{
	char	*c;

	c = "AbC";
	assert(c != ft_strdup(c));
}

void	ft_strdup_test(void)
{
	dprintf(1, "Test 01: ");
	unittest1();
	dprintf(1, "OK\nTest 02: ");
	unittest2();
	dprintf(1, "OK\nTest 03: ");
	unittest3();
	dprintf(1, "OK\n");
}
