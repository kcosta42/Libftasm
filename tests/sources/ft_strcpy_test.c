/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:54:40 by kcosta            #+#    #+#             */
/*   Updated: 2018/09/25 14:29:58 by kcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tests.h"

extern char	*ft_strcpy(char *dst, const char *src);
static void unittest1(void)
{

	char	buf1[6], buf2[6];

	bzero(buf1, 6);
	bzero(buf2, 6);

	assert(strcmp(ft_strcpy(buf1, "abcde"), strcpy(buf2, "abcde")) == 0);
}

static void unittest2(void)
{

	char	buf1[6], buf2[6];

	bzero(buf1, 6);
	bzero(buf2, 6);

	assert(strcmp(ft_strcpy(buf1, "abc"), strcpy(buf2, "abc")) == 0);
}

void	ft_strcpy_test(void)
{
	dprintf(1, "Test 01: ");
	unittest1();
	dprintf(1, "OK\nTest 02: ");
	unittest2();
	dprintf(1, "OK\n");
}
