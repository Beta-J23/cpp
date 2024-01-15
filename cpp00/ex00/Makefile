SRCS			= megaphone.cpp
OBJS			= $(SRCS:.c=.o)
TARGET			= megaphone

CC				= c++ -g
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

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
