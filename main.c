/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:04:32 by kcosta            #+#    #+#             */
/*   Updated: 2018/09/06 13:22:50 by kcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>

///////////////////////////////////////////////
///////////////////////////////////////////////
// d8888b.  .d8b.  .d8888. d888888b  .o88b.
// 88  `8D d8' `8b 88'  YP   `88'   d8P  Y8
// 88oooY' 88ooo88 `8bo.      88    8P
// 88~~~b. 88~~~88   `Y8b.    88    8b
// 88   8D 88   88 db   8D   .88.   Y8b  d8
// Y8888P' YP   YP `8888Y' Y888888P  `Y88P'
///////////////////////////////////////////////
///////////////////////////////////////////////

extern void		ft_bzero(void *s, size_t n);
void ft_bzero_test(void)
{
	char *str;

	puts("\nOriginal: ");
	str = strdup("Hello World!");
	printf("\"%s\"\n", str);
	bzero(str, strlen(str));
	printf("\"%s\"\n", str);
	free(str);
	puts("\nMine: ");
	str = strdup("Hello World!");
	printf("\"%s\"\n", str);
	ft_bzero(str, strlen(str));
	printf("\"%s\"\n", str);
	free(str);

	puts("");

	puts("\nOriginal: ");
	str = strdup("Still here ?");
	printf("\"%s\"\n", str);
	bzero(str + 2, strlen(str) - 2);
	printf("\"%s\"\n", str);
	free(str);
	puts("\nMine: ");
	str = strdup("Still here ?");
	printf("\"%s\"\n", str);
	ft_bzero(str + 2, strlen(str) - 2);
	printf("\"%s\"\n", str);
	free(str);

	puts("");

	puts("\nOriginal: ");
	str = strdup("Bye ;)");
	printf("\"%s\"\n", str);
	bzero(str + 2, 2);
	printf("\"%s\"\n", str);
	printf("\"%s\"\n", str + 3);
	printf("\"%s\"\n", str + 4);
	free(str);
	puts("\nMine: ");
	str = strdup("Bye ;)");
	printf("\"%s\"\n", str);
	ft_bzero(str + 2, 2);
	printf("\"%s\"\n", str);
	printf("\"%s\"\n", str + 3);
	printf("\"%s\"\n", str + 4);
	free(str);
}

extern char		*ft_strcat(char *restrict s1, const char *restrict s2);
void ft_strcat_test(void)
{
	char *str;

	puts("\nOriginal: ");
	str = (char *)malloc(sizeof(char) * 32);
	str[0] = 0;
	str = strcat(str, "Hello ");
	str = strcat(str, "World!");
	printf("%s", str);
	free(str);

	puts("\nMine: ");
	str = (char *)malloc(sizeof(char) * 32);
	str[0] = 0;
	str = ft_strcat(str, "Hello ");
	str = ft_strcat(str, "World!");
	printf("%s", str);
	free(str);
}

extern int		ft_isalpha(int c);
void ft_isalpha_test(void)
{
	int	j;
	int	ret;

	puts("\nOriginal: ");
	j = -9;
	while (j < 255)
	{
		ret = isalpha(j);
		if (j % 10 == 0)
			printf("%d ", ret);
		else
			printf("%d", ret);
		j++;
	}

	puts("\nMine: ");
	j = -9;
	while (j < 255)
	{
		ret = ft_isalpha(j);
		if (j % 10 == 0)
			printf("%d ", ret);
		else
			printf("%d", ret);
		j++;
	}
}

extern int		ft_isdigit(int c);
void ft_isdigit_test(void)
{
	int	j;
	int	ret;

	puts("\nOriginal: ");
	j = -9;
	while (j < 255)
	{
		ret = isdigit(j);
		if (j % 10 == 0)
			printf("%d ", ret);
		else
			printf("%d", ret);
		j++;
	}

	puts("\nMine: ");
	j = -9;
	while (j < 255)
	{
		ret = ft_isdigit(j);
		if (j % 10 == 0)
			printf("%d ", ret);
		else
			printf("%d", ret);
		j++;
	}
}

extern int		ft_isalnum(int c);
void ft_isalnum_test(void)
{
	int	j;
	int	ret;

	puts("\nOriginal: ");
	j = -9;
	while (j < 255)
	{
		ret = isalnum(j);
		if (j % 10 == 0)
			printf("%d ", ret);
		else
			printf("%d", ret);
		j++;
	}

	puts("\nMine: ");
	j = -9;
	while (j < 255)
	{
		ret = ft_isalnum(j);
		if (j % 10 == 0)
			printf("%d ", ret);
		else
			printf("%d", ret);
		j++;
	}
}

extern int		ft_isascii(int c);
void ft_isascii_test(void)
{
	int	j;
	int	ret;

	puts("\nOriginal: ");
	j = -9;
	while (j < 255)
	{
		ret = isascii(j);
		if (j % 10 == 0)
			printf("%d ", ret);
		else
			printf("%d", ret);
		j++;
	}

	puts("\nMine: ");
	j = -9;
	while (j < 255)
	{
		ret = ft_isascii(j);
		if (j % 10 == 0)
			printf("%d ", ret);
		else
			printf("%d", ret);
		j++;
	}
}

extern int		ft_isprint(int c);
void ft_isprint_test(void)
{
	int	j;
	int	ret;

	puts("\nOriginal: ");
	j = -9;
	while (j < 255)
	{
		ret = isprint(j);
		if (j % 10 == 0)
			printf("%d ", ret);
		else
			printf("%d", ret);
		j++;
	}

	puts("\nMine: ");
	j = -9;
	while (j < 255)
	{
		ret = ft_isprint(j);
		if (j % 10 == 0)
			printf("%d ", ret);
		else
			printf("%d", ret);
		j++;
	}
}

extern int		ft_toupper(int c);
void ft_toupper_test(void)
{
	int	j;
	int	ret;

	puts("\nOriginal: ");
	j = -9;
	while (j < 255)
	{
		ret = toupper(j);
		if (j % 10 == 0)
			printf("%d ", ret);
		else
			printf("%d", ret);
		j++;
	}

	puts("\nMine: ");
	j = -9;
	while (j < 255)
	{
		ret = ft_toupper(j);
		if (j % 10 == 0)
			printf("%d ", ret);
		else
			printf("%d", ret);
		j++;
	}
}

extern int		ft_tolower(int c);
void ft_tolower_test(void)
{
	int	j;
	int	ret;

	puts("\nOriginal: ");
	j = -9;
	while (j < 255)
	{
		ret = tolower(j);
		if (j % 10 == 0)
			printf("%d ", ret);
		else
			printf("%d", ret);
		j++;
	}

	puts("\nMine: ");
	j = -9;
	while (j < 255)
	{
		ret = ft_tolower(j);
		if (j % 10 == 0)
			printf("%d ", ret);
		else
			printf("%d", ret);
		j++;
	}
}

extern int		ft_puts(const char *s);
void ft_puts_test(void)
{
	int ret;

	puts("\nOriginal: ");
	ret = puts("Hello World!");
	if (ret > 0)
		printf("(nonnegative value returned)");
	else if (ret < 0)
		printf("(negative value returned)");
	else
		printf("(returns 0)");
	puts("\nMine: ");
	ret = ft_puts("Hello World!");
	if (ret > 0)
		printf("(nonnegative value returned)");
	else if (ret < 0)
		printf("(negative value returned)");
	else
		printf("(returns 0)");

	puts("");

	puts("\nOriginal: ");
	ret = puts(NULL);
	if (ret > 0)
		printf("(nonnegative value returned)");
	else if (ret < 0)
		printf("(negative value returned)");
	else
		printf("(returns 0)");
	puts("\nMine: ");
	ret = ft_puts(NULL);
	if (ret > 0)
		printf("(nonnegative value returned)");
	else if (ret < 0)
		printf("(negative value returned)");
	else
		printf("(returns 0)");

	puts("");

	puts("\nOriginal: ");
	ret = puts("");
	if (ret > 0)
		printf("(nonnegative value returned)");
	else if (ret < 0)
		printf("(negative value returned)");
	else
		printf("(returns 0)");
	puts("\nMine: ");
	ret = ft_puts("");
	if (ret > 0)
		printf("(nonnegative value returned)");
	else if (ret < 0)
		printf("(negative value returned)");
	else
		printf("(returns 0)");
}

//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
//  .d8b.  d8888b. db    db  .d8b.  d8b   db  .o88b. d88888b d8888b.
// d8' `8b 88  `8D 88    88 d8' `8b 888o  88 d8P  Y8 88'     88  `8D
// 88ooo88 88   88 Y8    8P 88ooo88 88V8o 88 8P      88ooooo 88   88
// 88~~~88 88   88 `8b  d8' 88~~~88 88 V8o88 8b      88~~~~~ 88   88
// 88   88 88  .8D  `8bd8'  88   88 88  V888 Y8b  d8 88.     88  .8D
// YP   YP Y8888D'    YP    YP   YP VP   V8P  `Y88P' Y88888P Y8888D'
//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////

extern size_t	ft_strlen(const char *s);
void ft_strlen_test(void)
{
	size_t	ret;
	puts("\nOriginal: ");
	ret = strlen("");
	printf("%zu", ret);
	puts("\nMine: ");
	ret = ft_strlen("");
	printf("%zu", ret);

	puts("");

	puts("\nOriginal: ");
	ret = strlen("Hello World!");
	printf("%zu", ret);
	puts("\nMine: ");
	ret = ft_strlen("Hello World!");
	printf("%zu", ret);

	puts("");

	puts("\nOriginal: ");
	ret = strlen("Cum saepe multa, tum memini domi in hemicyclio sedentem, ut solebat, cum et ego essem una et pauci admodum familiares, in eum sermonem illum incidere qui tum forte multis erat in ore. Meministi enim profecto, Attice, et eo magis, quod P. Sulpicio utebare multum, cum is tribunus plebis capitali odio a Q. Pompeio, qui tum erat consul, dissideret, quocum coniunctissime et amantissime vixerat, quanta esset hominum vel admiratio vel querella.");
	printf("%zu", ret);
	puts("\nMine: ");
	ret = ft_strlen("Cum saepe multa, tum memini domi in hemicyclio sedentem, ut solebat, cum et ego essem una et pauci admodum familiares, in eum sermonem illum incidere qui tum forte multis erat in ore. Meministi enim profecto, Attice, et eo magis, quod P. Sulpicio utebare multum, cum is tribunus plebis capitali odio a Q. Pompeio, qui tum erat consul, dissideret, quocum coniunctissime et amantissime vixerat, quanta esset hominum vel admiratio vel querella.");
	printf("%zu", ret);
}

// extern void		*ft_memset(void *b, int c, size_t len);
// void ft_memset_test(void)
// {
// 	char *str;

// 	puts("\nOriginal: ");
// 	str = strdup("Hello World!");
// 	printf("%s", str);
// 	str = memset(str, 'A', strlen(str));
// 	printf("%s", str);
// 	free(str);
// 	puts("\nMine: ");
// 	str = strdup("Hello World!");
// 	printf("%s", str);
// 	str = ft_memset(str, 'A', strlen(str));
// 	printf("%s", str);
// 	free(str);

// 	puts("");

// 	puts("\nOriginal: ");
// 	str = strdup("Bye ;)");
// 	printf("%s", str);
// 	str = memset(str, 'B', 2);
// 	printf("%s", str);
// 	free(str);
// 	puts("\nMine: ");
// 	str = strdup("Bye ;)");
// 	printf("%s", str);
// 	str = ft_memset(str, 'B', 2);
// 	printf("%s", str);
// 	free(str);
// }

// extern void		*ft_memcpy(void *dst, const void *src, size_t n);
// void ft_memcpy_test(void)
// {
// 	char *str;

// 	puts("\nOriginal: ");
// 	str = (char *)malloc(sizeof(char) * 32);
// 	str[0] = 0;
// 	memcpy(str, "Hello World!", 12);
// 	printf("%s", str);
// 	free(str);
// 	puts("\nMine: ");
// 	str = (char *)malloc(sizeof(char) * 32);
// 	str[0] = 0;
// 	ft_memcpy(str, "Hello World!", 12);
// 	printf("%s", str);
// 	free(str);

// 	puts("");

// 	puts("\nOriginal: ");
// 	str = (char *)malloc(sizeof(char) * 32);
// 	str[0] = 0;
// 	memcpy(str, "Bye World!", 3);
// 	printf("%s", str);
// 	free(str);
// 	puts("\nMine: ");
// 	str = (char *)malloc(sizeof(char) * 32);
// 	str[0] = 0;
// 	ft_memcpy(str, "Bye World!", 3);
// 	printf("%s", str);
// 	free(str);
// }

// extern char		*ft_strdup(const char *s1);
// void ft_strdup_test(void)
// {
// 	char *str;

// 	puts("\nOriginal: ");
// 	str = strdup("Hello World");
// 	printf("%s", str);
// 	free(str);
// 	puts("\nMine: ");
// 	str = ft_strdup("Hello World");
// 	printf("%s", str);
// 	free(str);
// }

// extern void		ft_cat(int fd);
// void ft_cat_test(void)
// {
// 	int fd;

// 	puts("\nBasic Test: ");
// 	fd = open("Makefile", O_RDONLY);
// 	if (fd > 0)
// 	{
// 		ft_cat(fd);
// 		close(fd);
// 	}

// 	puts("");

// 	puts("\nTry with fd = -1: ");
// 	ft_cat(-1);

// 	puts("");

// 	puts("\nCall close() before ft_cat(): ");
// 	fd = open("Makefile", O_RDONLY);
// 	if (fd > 0)
// 	{
// 		close(fd);
// 		ft_cat(fd);
// 	}
// }

/////////////////////////////////////////////////
/////////////////////////////////////////////////
// d8888b.  .d88b.  d8b   db db    db .d8888.
// 88  `8D .8P  Y8. 888o  88 88    88 88'  YP
// 88oooY' 88    88 88V8o 88 88    88 `8bo.
// 88~~~b. 88    88 88 V8o88 88    88   `Y8b.
// 88   8D `8b  d8' 88  V888 88b  d88 db   8D
// Y8888P'  `Y88P'  VP   V8P ~Y8888P' `8888Y'
/////////////////////////////////////////////////
/////////////////////////////////////////////////

int main(void)
{
	ft_bzero_test();
	puts("");

	ft_strcat_test();
	puts("");

	ft_isalpha_test();
	puts("");

	ft_isdigit_test();
	puts("");

	ft_isalnum_test();
	puts("");

	ft_isascii_test();
	puts("");

	ft_isprint_test();
	puts("");

	ft_toupper_test();
	puts("");

	ft_tolower_test();
	puts("");

	ft_puts_test();
	puts("");

	ft_strlen_test();
	puts("");

	return (0);
}
