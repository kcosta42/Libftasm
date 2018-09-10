/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 18:44:36 by kcosta            #+#    #+#             */
/*   Updated: 2018/09/10 18:57:58 by kcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tests.h"

extern void	ft_bzero(void *s, size_t n);

static void simple_string(void)
{
	char	control[10];
	char	subject[] = "123456789";

	bzero(control, 10);
	ft_bzero(subject, 10);
	assert(memcmp(control, subject, 10) == 0);
	subject[0] = 'a';
	ft_bzero(subject, 0);
	assert(subject[0] == 'a');
}

static void test_only_bzero_first_x_chars(void)
{
	char	control[] = "123456789";
	char	subject[] = "123456789";

	bzero(control, 3);
	ft_bzero(subject, 3);
	assert(memcmp(subject, control, 10) == 0);
}

static void test_zero_case(void)
{
	char	control[] = "123456789";
	char	subject[] = "123456789";

	bzero(control, 0);
	ft_bzero(subject, 0);
	assert(memcmp(subject, control, 10) == 0);
}

void	ft_bzero_test(void)
{
	printf("Test 01: ");
	simple_string();
	printf("OK\nTest 02: ");
	test_only_bzero_first_x_chars();
	printf("OK\nTest 03: ");
	test_zero_case();
	printf("OK\n");
}
