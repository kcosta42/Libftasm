/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 18:46:25 by kcosta            #+#    #+#             */
/*   Updated: 2018/09/25 14:27:30 by kcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tests.h"

int main(void)
{
	dprintf(1, "\nPart 1 - Fonctions simples de la libc\n");
	dprintf(1, "\nft_bzero\n");
	ft_bzero_test();
	dprintf(1, "\nft_strcat\n");
	ft_strcat_test();
	dprintf(1, "\nft_isalpha\n");
	ft_isalpha_test();
	dprintf(1, "\nft_isdigit\n");
	ft_isdigit_test();
	dprintf(1, "\nft_isalnum\n");
	ft_isalnum_test();
	dprintf(1, "\nft_isascii\n");
	ft_isascii_test();
	dprintf(1, "\nft_isprint\n");
	ft_isprint_test();
	dprintf(1, "\nft_toupper\n");
	ft_toupper_test();
	dprintf(1, "\nft_tolower\n");
	ft_tolower_test();
	dprintf(1, "\nft_puts\n");
	ft_puts_test();

	dprintf(1, "\nPart 2 - Fonctions simples mais un peu moins de la libc\n");
	dprintf(1, "\nft_strlen\n");
	ft_strlen_test();
	dprintf(1, "\nft_memset\n");
	ft_memset_test();
	dprintf(1, "\nft_memcpy\n");
	ft_memcpy_test();
	dprintf(1, "\nft_strdup\n");
	ft_strdup_test();

	dprintf(1, "\nPart 3 - Cat\n");
	dprintf(1, "\nft_cat\n");
	ft_cat_test();

	dprintf(1, "\nPartie bonus\n");
	dprintf(1, "\nft_isblank\n");
	ft_isblank_test();
	dprintf(1, "\nft_islower\n");
	ft_islower_test();
	dprintf(1, "\nft_isspace\n");
	ft_isspace_test();
	dprintf(1, "\nft_putchar\n");
	ft_putchar_test();
	dprintf(1, "\nft_putnbr\n");
	ft_putnbr_test();
	dprintf(1, "\nft_strcpy\n");
	ft_strcpy_test();
	dprintf(1, "\nft_atoi\n");
	ft_atoi_test();

	return (0);
}
