/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:56:52 by kcosta            #+#    #+#             */
/*   Updated: 2018/09/10 22:25:49 by kcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tests.h"

extern int	ft_atoi(const char *str);
#define mt_test_atoi(test_name, tested_str) \
	static void test_## test_name(void) \
	{ \
		assert(ft_atoi(tested_str) == atoi(tested_str)); \
	}

mt_test_atoi(num1, " -sfecf");
mt_test_atoi(num2, "");
mt_test_atoi(num3, "+2798");
mt_test_atoi(num4, "+0089");
mt_test_atoi(num5, "a56");
mt_test_atoi(num6, "      --s8");
mt_test_atoi(num7, "0001020304");
mt_test_atoi(num8, "000000000000000110");
mt_test_atoi(num9, "-153");
mt_test_atoi(num10, "+132");
mt_test_atoi(num11, "++876");
mt_test_atoi(num12, "--132");
mt_test_atoi(num13, "dwbk ");
mt_test_atoi(num14, " 1");
mt_test_atoi(num15, "42jk ");
mt_test_atoi(num16, " 21");
mt_test_atoi(num17, "     32 ");
mt_test_atoi(num18, "\n          42 24");
mt_test_atoi(num19, "1-2");
mt_test_atoi(num20, "4+2");
mt_test_atoi(num21, "  +442");
mt_test_atoi(num22, "  -4232");
mt_test_atoi(num23, "4,5");
mt_test_atoi(num24, "+");
mt_test_atoi(num25, "-");
mt_test_atoi(num26, "-+1");
mt_test_atoi(num27, "+-1");
mt_test_atoi(num28, "\200123");
mt_test_atoi(num29, "123\200");
mt_test_atoi(num30, "  \t\n  \r\r\v\f-899");
mt_test_atoi(num31, "-2147483648");
mt_test_atoi(num32, "2147483647");

void	ft_atoi_test(void)
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
	printf("OK\nTest 20: ");
	test_num20();
	printf("OK\nTest 21: ");
	test_num21();
	printf("OK\nTest 22: ");
	test_num22();
	printf("OK\nTest 23: ");
	test_num23();
	printf("OK\nTest 24: ");
	test_num24();
	printf("OK\nTest 25: ");
	test_num25();
	printf("OK\nTest 26: ");
	test_num26();
	printf("OK\nTest 27: ");
	test_num27();
	printf("OK\nTest 28: ");
	test_num28();
	printf("OK\nTest 29: ");
	test_num29();
	printf("OK\nTest 30: ");
	test_num30();
	printf("OK\nTest 31: ");
	test_num31();
	printf("OK\nTest 32: ");
	test_num32();
	printf("OK\n");
}
