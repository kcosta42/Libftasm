/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:54:40 by kcosta            #+#    #+#             */
/*   Updated: 2018/09/10 20:49:19 by kcosta           ###   ########.fr       */
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
	printf("Test 01: ");
	unittest1();
	printf("OK\nTest 02: ");
	unittest2();
	printf("OK\n");
}
