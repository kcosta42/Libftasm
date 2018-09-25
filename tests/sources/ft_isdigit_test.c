/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:04:36 by kcosta            #+#    #+#             */
/*   Updated: 2018/09/25 14:28:43 by kcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tests.h"

extern int	ft_isdigit(int c);
#define mt_test_isdigit(test_name, tested_char)												\
	static void test_## test_name(void)												\
	{																						\
		assert((ft_isdigit(tested_char) != 0) == (isdigit(tested_char) != 0));			\
	}

mt_test_isdigit(num1, 'a');
mt_test_isdigit(num2, 'a' + 0x100);
mt_test_isdigit(num3, '2');
mt_test_isdigit(num4, 'Z');
mt_test_isdigit(num5, 't');
mt_test_isdigit(num6, 0);
mt_test_isdigit(num7, 1);
mt_test_isdigit(num8, 9999);
mt_test_isdigit(num9, '1');
mt_test_isdigit(num10, '2');
mt_test_isdigit(num11, 'A');
mt_test_isdigit(num12, 'Z');
mt_test_isdigit(num13, ' ');
mt_test_isdigit(num14, '%');
mt_test_isdigit(num15, '\t');
mt_test_isdigit(num16, '\n');
mt_test_isdigit(num17, '\v');
mt_test_isdigit(num18, '\b');
mt_test_isdigit(num19, 7);

void	ft_isdigit_test(void)
{
	dprintf(1, "Test 01: ");
	test_num1();
	dprintf(1, "OK\nTest 02: ");
	test_num2();
	dprintf(1, "OK\nTest 03: ");
	test_num3();
	dprintf(1, "OK\nTest 04: ");
	test_num4();
	dprintf(1, "OK\nTest 05: ");
	test_num5();
	dprintf(1, "OK\nTest 06: ");
	test_num6();
	dprintf(1, "OK\nTest 07: ");
	test_num7();
	dprintf(1, "OK\nTest 08: ");
	test_num8();
	dprintf(1, "OK\nTest 09: ");
	test_num9();
	dprintf(1, "OK\nTest 10: ");
	test_num10();
	dprintf(1, "OK\nTest 11: ");
	test_num11();
	dprintf(1, "OK\nTest 12: ");
	test_num12();
	dprintf(1, "OK\nTest 13: ");
	test_num13();
	dprintf(1, "OK\nTest 14: ");
	test_num14();
	dprintf(1, "OK\nTest 15: ");
	test_num15();
	dprintf(1, "OK\nTest 16: ");
	test_num16();
	dprintf(1, "OK\nTest 17: ");
	test_num17();
	dprintf(1, "OK\nTest 18: ");
	test_num18();
	dprintf(1, "OK\nTest 19: ");
	test_num19();
	dprintf(1, "OK\n");
}
