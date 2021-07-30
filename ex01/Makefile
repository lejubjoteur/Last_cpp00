CLANG = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./PhoneBook.cpp ./ClassContact.cpp ./main.cpp

OBJ = $(SRC:.cpp=.o)

NAME = phonebook

.cpp.o:
		$(CLANG) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJ)
	$(CLANG) $(CFLAGS) $(OBJ) -o ${NAME}

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY : fclean re clean
