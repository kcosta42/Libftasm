/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:04:36 by kcosta            #+#    #+#             */
/*   Updated: 2018/09/10 19:16:06 by kcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tests.h"

extern int	ft_islower(int c);
#define mt_test_islower(test_name, tested_char)												\
	static void test_## test_name(void)												\
	{																						\
		assert((ft_islower(tested_char) != 0) == (islower(tested_char) != 0));			\
	}

mt_test_islower(num1, 'a');
mt_test_islower(num2, 'a' + 0x100);
mt_test_islower(num3, '2');
mt_test_islower(num4, 'Z');
mt_test_islower(num5, 't');
mt_test_islower(num6, 0);
mt_test_islower(num7, 1);
mt_test_islower(num8, 9999);
mt_test_islower(num9, '1');
mt_test_islower(num10, '2');
mt_test_islower(num11, 'A');
mt_test_islower(num12, 'Z');
mt_test_islower(num13, ' ');
mt_test_islower(num14, '%');
mt_test_islower(num15, '\t');
mt_test_islower(num16, '\n');
mt_test_islower(num17, '\v');
mt_test_islower(num18, '\b');
mt_test_islower(num19, 7);

void	ft_islower_test(void)
{
	printf("Test 01: ");
	test_num1();
	printf("OK\nTest 02: ");
	test_num2();
	printf("OK\nTest 03: ");
	test_num3();
	printf("OK\nTest 04: ");
	test_num4();
	printf("OK\nTest 05: ");
	test_num5();
	printf("OK\nTest 06: ");
	test_num6();
	printf("OK\nTest 07: ");
	test_num7();
	printf("OK\nTest 08: ");
	test_num8();
	printf("OK\nTest 09: ");
	test_num9();
	printf("OK\nTest 10: ");
	test_num10();
	printf("OK\nTest 11: ");
	test_num11();
	printf("OK\nTest 12: ");
	test_num12();
	printf("OK\nTest 13: ");
	test_num13();
	printf("OK\nTest 14: ");
	test_num14();
	printf("OK\nTest 15: ");
	test_num15();
	printf("OK\nTest 16: ");
	test_num16();
	printf("OK\nTest 17: ");
	test_num17();
	printf("OK\nTest 18: ");
	test_num18();
	printf("OK\nTest 19: ");
	test_num19();
	printf("OK\n");
}
