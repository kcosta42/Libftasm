# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/07 12:10:08 by kcosta            #+#    #+#              #
#    Updated: 2018/09/10 22:55:15 by kcosta           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ========== Editable ========== #
BIN		:= unit_test
# ============================== #

# ========== Standard ========== #
CC		:= gcc
FLAGS	:= -Wall -Wextra -Werror -g
# ============================== #

# =========== Files ============ #
SRCS_FILES		:=	main.c				\
					ft_bzero_test.c		\
					ft_isalnum_test.c	\
					ft_isalpha_test.c	\
					ft_isascii_test.c	\
					ft_isblank_test.c	\
					ft_isdigit_test.c	\
					ft_islower_test.c	\
					ft_isprint_test.c	\
					ft_isspace_test.c	\
					ft_tolower_test.c	\
					ft_toupper_test.c	\
					ft_memcpy_test.c	\
					ft_memset_test.c	\
					ft_puts_test.c		\
					ft_strcat_test.c	\
					ft_strdup_test.c	\
					ft_strlen_test.c	\
					ft_strcpy_test.c	\
					ft_atoi_test.c		\
					ft_cat_test.c
HEADERS_FILES	:=	ft_tests.h
# ============================== #

# ========== Sources =========== #
SRCS_PATH	:= sources/
SRCS		:= $(addprefix $(SRCS_PATH), $(SRCS_FILES))
# ============================== #

# ========== Objects =========== #
OBJS_PATH	:= objs/
OBJS		:= $(addprefix $(OBJS_PATH), $(SRCS_FILES:.c=.o))
# ============================== #

# ========== Includes ========== #
INCLUDES_PATH	:= includes/
INCLUDES		:= -I $(INCLUDES_PATH)
HEADERS			:= $(addprefix $(INCLUDES_PATH), $(HEADERS_FILES))
# ============================== #

# ========== Libraries ========= #
LIBFTS_PATH		:= ../
LIBFTS			:= -L $(LIBFTS_PATH) -lfts
# ============================== #

.PHONY: all libfts clean fclean re

all: libfts $(BIN)

libfts:
	@make -C $(LIBFTS_PATH)

$(OBJS_PATH)%.o: $(SRCS_PATH)%.c $(HEADERS) $(LIBFTS_PATH)libfts.a
	@mkdir $(OBJS_PATH) 2> /dev/null || true
	$(CC) $(FLAGS) $(INCLUDES) -o $@ -c $<


$(BIN): $(OBJS)
	$(CC) $(FLAGS) $(LIBFTS) $(OBJS) -o $@

clean:
	@make -C $(LIBFTS_PATH) clean &> /dev/null
	@rm -fv $(OBJS)
	@rmdir $(OBJS_PATH) 2> /dev/null || true

fclean: clean
	@make -C $(LIBFTS_PATH) fclean &> /dev/null
	@rm -fv $(BIN)

re: fclean all
