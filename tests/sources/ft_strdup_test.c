/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:23:51 by kcosta            #+#    #+#             */
/*   Updated: 2018/09/10 20:46:43 by kcosta           ###   ########.fr       */
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
	printf("Test 01: ");
	unittest1();
	printf("OK\nTest 02: ");
	unittest2();
	printf("OK\nTest 03: ");
	unittest3();
	printf("OK\n");
}
