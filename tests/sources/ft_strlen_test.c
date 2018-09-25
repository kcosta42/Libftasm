/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:25:41 by kcosta            #+#    #+#             */
/*   Updated: 2018/09/25 14:30:14 by kcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tests.h"

extern size_t	ft_strlen(const char *s);
#define mt_test_strlen(test_name, tested_str) \
	static void unit## test_name(void) \
	{ \
		assert(ft_strlen(tested_str) == strlen(tested_str)); \
	}

mt_test_strlen(test1, "chat");
mt_test_strlen(test2, "");
mt_test_strlen(test3, "aaa\0aaa");

static void test_10_million_chars_string(void)
{
	int test_len = 10 * 1000 * 1000;
	char *str = malloc(sizeof(char) * test_len);;

	memset(str, 'a', test_len);
	str[test_len - 1] = '\0';
	assert(ft_strlen(str) == strlen(str));
	free(str);
}

void	ft_strlen_test(void)
{
	dprintf(1, "Test 01: ");
	unittest1();
	dprintf(1, "OK\nTest 02: ");
	unittest2();
	dprintf(1, "OK\nTest 03: ");
	unittest3();
	dprintf(1, "OK\nTest 04: ");
	test_10_million_chars_string();
	dprintf(1, "OK\n");
}
