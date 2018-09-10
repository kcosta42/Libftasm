/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 22:40:53 by kcosta            #+#    #+#             */
/*   Updated: 2018/09/10 22:42:01 by kcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tests.h"

extern void	ft_cat(int fd);
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
	mt_assert(memcmp(buf, "12345678912345678", 17) == 0);
}

void	ft_cat_test(void)
{
	printf("Test 01: ");
	simple_test();
	printf("OK\n");
}
