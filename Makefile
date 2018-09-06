# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/04 11:46:32 by kcosta            #+#    #+#              #
#    Updated: 2018/09/06 14:39:51 by kcosta           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ========== Editable ========== #
NAME			:= libfts.a
# ============================== #

# ========== Standard ========== #
CASM			:= nasm
FLAGS			:= -f macho64
# ============================== #

# =========== Files ============ #
SRCS_FILES		:=	ft_bzero.s		\
					ft_strcat.s		\
					ft_isalpha.s	\
					ft_isdigit.s	\
					ft_isalnum.s	\
					ft_isascii.s	\
					ft_isprint.s	\
					ft_toupper.s	\
					ft_tolower.s	\
					ft_puts.s		\
					ft_strlen.s
# ============================== #

# ========== Sources =========== #
SRCS_PATH		:= sources/
SRCS			:= $(addprefix $(SRCS_PATH), $(SRCS_FILES))
# ============================== #

# ========== Objects =========== #
OBJS_PATH		:= objs/
OBJS			:= $(addprefix $(OBJS_PATH), $(SRCS_FILES:.s=.o))
# ============================== #

.PHONY: all clean fclean re

all: $(NAME)

$(OBJS_PATH)%.o: $(SRCS_PATH)%.s
	@mkdir $(OBJS_PATH) 2> /dev/null || true
	$(CASM) $(FLAGS) $< -o $@

$(NAME): $(OBJS)
	@ar rc -v $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	@rm -fv $(OBJS)
	@rmdir $(OBJS_PATH) 2> /dev/null || true

fclean: clean
	@rm -fv $(NAME)

re: fclean all
