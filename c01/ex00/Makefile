# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alpelliz <alpelliz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 14:02:09 by alpelliz          #+#    #+#              #
#    Updated: 2024/01/18 15:38:34 by alpelliz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= Zombie.cpp newZombie.cpp main.cpp randomChump.cpp
OBJS			= $(SRCS:.c=.o)
TARGET			= zombie

CC				= c++ -g
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -std=c++98

all: $(TARGET)

$(NAME) : all

$(TARGET): $(SRCS)
	@$(CC) $(SRCS) $(CFLAGS) -o $(TARGET)
	@printf "Ready.\n"

clean:
	@$(RM) $(TARGET)
	@printf 'clean: megaphone executable succesfully removed\n'

re: clean all

fclean: clean
	@printf 'fclean: target removed\n'

.PHONY:			all clean fclean re%
