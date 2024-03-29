/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 22:40:53 by kcosta            #+#    #+#             */
/*   Updated: 2018/09/25 14:31:05 by kcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tests.h"

extern void ft_cat(int fd);
static void simple_test(void)
{
	int pids[2];
	char buf[10];
	int saved_stdout;

	saved_stdout = dup(1);
	pipe(pids);
	dup2(pids[1], 1);

	int fd;

	system("echo '12345678912345678' > catout");
	fd = open("catout", O_RDONLY);
	if (fd == -1)
		return ;
	ft_cat(fd);
	read(pids[0], buf, 17);
	dup2(saved_stdout, 1);

	close(fd);
	close(pids[0]);
	close(pids[1]);
	close(saved_stdout);
	system("rm catout");
	assert(memcmp(buf, "12345678912345678", 17) == 0);
}

void fd_negative_test(void)
{
	ft_cat(-1);
}

void close_before_cat(void)
{
	int fd;

	fd = open(__FILE__, O_RDONLY);
	if (fd > 0)
	{
		close(fd);
		ft_cat(fd);
	}
}

static void simple_test2(void)
{
	int fd;

	fd = open(__FILE__, O_RDONLY);
	ft_cat(fd);
	close(fd);
}

void	ft_cat_test(void)
{
	dprintf(1, "Test 01: ");
	simple_test();
	dprintf(1, "OK\nTest 02: ");
	fd_negative_test();
	dprintf(1, "OK\nTest 03: ");
	close_before_cat();
	dprintf(1, "OK\nTest 04:\n");
	simple_test2();
	dprintf(1, "\nOK\n");
}
