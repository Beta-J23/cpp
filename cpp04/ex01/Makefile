# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alpelliz <alpelliz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/20 16:02:43 by alpelliz          #+#    #+#              #
#    Updated: 2024/01/22 11:29:07 by alpelliz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			= main.cpp src/Animal.cpp src/Wrong_Animal.cpp src/Dog.cpp src/Cat.cpp src/Wrong_Cat.cpp src/Brain.cpp
OBJS			= $(SRCS:.c=.o)
TARGET			= Animal_Brainz

CC				= c++
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -std=c++98

all: $(TARGET)

$(NAME) : all

$(TARGET): $(SRCS)
	@$(CC) $(SRCS) $(CFLAGS) -o $(TARGET)
	@printf "Ready.\n"

clean:
	@$(RM) $(TARGET)
	@printf 'clean: executable succesfully removed\n'

re: clean all

fclean: clean
	@printf 'fclean: target removed\n'

.PHONY:			all clean fclean re%
