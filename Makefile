# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/18 09:21:57 by lsibanda          #+#    #+#              #
#    Updated: 2018/07/18 09:22:00 by lsibanda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = filler

SRC = main.c\
	  find_player.c\
	  get_info.c\
	  check_piece.c\
	  save_map.c\
	  ft_player.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	make -C libft/ fclean && make -C libft/
	gcc -Wall -Wextra -Werror -c $(SRC)
	gcc -Wall -Wextra -Werror $(OBJ) libft/libft.a -o $(NAME)

clean:
	/bin/rm -f $(OBJ)
	make -C libft/ clean

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f $(NAME).trace
	/bin/rm -f libft/libft.a

re: fclean all
