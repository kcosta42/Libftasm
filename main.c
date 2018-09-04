/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:04:32 by kcosta            #+#    #+#             */
/*   Updated: 2018/09/04 12:26:18 by kcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

extern void ft_bzero(void *s, size_t n);
extern void *ft_memset(void *b, int c, size_t len);
extern char * ft_strcat(char *restrict s1, const char *restrict s2);

int main(void)
{
	char *str;

	str = strdup("Hello World!");
	printf("%s\n", str);
	str = (char*)ft_memset(str, 'A', strlen(str));
	printf("%s\n", str);
	ft_bzero(str, strlen(str));
	printf("%s\n", str);
	return (0);
}
