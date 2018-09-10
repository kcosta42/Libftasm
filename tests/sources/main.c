/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 18:46:25 by kcosta            #+#    #+#             */
/*   Updated: 2018/09/10 22:49:08 by kcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tests.h"

int main(void)
{
	puts("\nft_bzero");
	ft_bzero_test();

	puts("\nft_isalnum");
	ft_isalnum_test();

	puts("\nft_isalpha");
	ft_isalpha_test();

	puts("\nft_isascii");
	ft_isascii_test();

	puts("\nft_isblank");
	ft_isblank_test();

	puts("\nft_isdigit");
	ft_isdigit_test();

	puts("\nft_islower");
	ft_islower_test();

	puts("\nft_isprint");
	ft_isprint_test();

	puts("\nft_isspace");
	ft_isspace_test();

	puts("\nft_tolower");
	ft_tolower_test();

	puts("\nft_toupper");
	ft_toupper_test();

	puts("\nft_memcpy");
	ft_memcpy_test();

	puts("\nft_memset");
	ft_memset_test();

	puts("\nft_puts");
	ft_puts_test();

	puts("\nft_strcat");
	ft_strcat_test();

	puts("\nft_strlen");
	ft_strlen_test();

	puts("\nft_strcpy");
	ft_strcpy_test();

	puts("\nft_strdup");
	ft_strdup_test();

	puts("\nft_atoi");
	ft_atoi_test();

	puts("\nft_cat");
	ft_cat_test();

	return (0);
}
