CLANG = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

NAME = megaphone

$(NAME): $(OBJ)
	$(CLANG) $(CFLAGS) $(OBJ) -o ${NAME}

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY : fclean re clean
