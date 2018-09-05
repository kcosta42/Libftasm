/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:04:32 by kcosta            #+#    #+#             */
/*   Updated: 2018/09/05 10:50:11 by kcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

extern void ft_bzero(void *s, size_t n);
extern void *ft_memset(void *b, int c, size_t len);
extern void	*ft_memcpy(void *dst, const void *src, size_t n);
extern int	ft_isalpha(int c);
extern int	ft_isdigit(int c);
extern int	ft_isalnum(int c);
extern int	ft_isascii(int c);
extern int	ft_isprint(int c);
extern int	ft_toupper(int c);
extern int	ft_tolower(int c);
extern int	ft_puts(const char *s);

int main(void)
{
	char *str;
	char *str2;

	str = strdup("Hello World!");
	str2 = strdup("Bye World!");
	ft_puts(str);
	str = (char*)ft_memset(str, 'A', strlen(str));
	ft_puts(str);
	ft_bzero(str, strlen(str));
	ft_puts(str);
	ft_memcpy(str, str2, strlen(str2));
	ft_puts(str);
	printf("ft_isalpha - 'a':(%s) '1':(%s)\n", ft_isalpha('a') ? "True" : "False", ft_isalpha('1') ? "True" : "False");
	printf("ft_isdigit - 'a':(%s) '1':(%s)\n", ft_isdigit('a') ? "True" : "False", ft_isdigit('1') ? "True" : "False");
	printf("ft_isalnum - 'a':(%s) '1':(%s)\n", ft_isalnum('a') ? "True" : "False", ft_isalnum('1') ? "True" : "False");
	printf("ft_isascii - '\\0':(%s) '1':(%s)\n", ft_isascii('\0') ? "True" : "False", ft_isascii('1') ? "True" : "False");
	printf("ft_isprint - '\\0':(%s) '1':(%s)\n", ft_isprint('\0') ? "True" : "False", ft_isprint('1') ? "True" : "False");
	printf("%c %c\n", ft_toupper('a'), ft_toupper('1'));
	printf("%c %c\n", ft_tolower('A'), ft_tolower('1'));
	return (0);
}
