#***************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamottet <mamottet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 13:06:31 by mamottet          #+#    #+#              #
#    Updated: 2023/05/23 09:56:26 by mamottet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -- Commande -- #

RM	= rm -f 
CC	= gcc
FL	= -Wall -Werror -Wextra
COMP	= $(CC) $(FL)
EX	= push_swap

# -- SRC -- #

SRC	=

# -- Target -- #

all:
				$(COMP) $(SRC) -o $(EX)

clean:
				$(RM) $(EX)

fclean:			clean
			$(RM) $(NAME)

re:			fclean all
