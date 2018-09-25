/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:22:32 by kcosta            #+#    #+#             */
/*   Updated: 2018/09/25 14:29:52 by kcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tests.h"

extern char	*ft_strcat(char *restrict s1, const char *restrict s2);
static void unittest1(void)
{
	char	buf[9];

	bzero(buf, 9);
	ft_strcat(buf, "");
	ft_strcat(buf, "Bon");
	ft_strcat(buf, "j");
	ft_strcat(buf, "our.");
	ft_strcat(buf, "");
	assert(strcmp(buf, "Bonjour.") == 0);
	assert(buf == ft_strcat(buf, ""));
}

void	ft_strcat_test(void)
{
	dprintf(1, "Test 01: ");
	unittest1();
	dprintf(1, "OK\n");
}
