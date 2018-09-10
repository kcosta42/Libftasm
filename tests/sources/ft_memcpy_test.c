/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:17:05 by kcosta            #+#    #+#             */
/*   Updated: 2018/09/10 19:28:06 by kcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tests.h"

extern void	*ft_memcpy(void *dst, const void *src, size_t n);
static void unittest1(void)
{
	char	b1[100], b2[100];

	memset(b1, 33, 100);
	memset(b2, 63, 100);

	ft_memcpy(b1, b2, 100);
	assert(memcmp(b1, b2, 100) == 0);
	assert(ft_memcpy(b1, b2, 0) == b1);
}

void	ft_memcpy_test(void)
{
	printf("Test 01: ");
	unittest1();
	printf("OK\n");
}
