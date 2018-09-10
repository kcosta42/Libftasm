/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tests.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 18:45:22 by kcosta            #+#    #+#             */
/*   Updated: 2018/09/10 19:59:22 by kcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TESTS
# define FT_TESTS

# include <ctype.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <fcntl.h>
# include <assert.h>
# include <unistd.h>

void	ft_bzero_test(void);
void	ft_isalnum_test(void);
void	ft_isalpha_test(void);
void	ft_isascii_test(void);
void	ft_isblank_test(void);
void	ft_isdigit_test(void);
void	ft_islower_test(void);
void	ft_isprint_test(void);
void	ft_isspace_test(void);
void	ft_tolower_test(void);
void	ft_toupper_test(void);
void	ft_memcpy_test(void);
void	ft_memset_test(void);
void	ft_puts_test(void);
void	ft_strcat_test(void);
void	ft_strdup_test(void);
void	ft_strlen_test(void);
void	ft_strcpy_test(void);
void	ft_atoi_test(void);

#endif
