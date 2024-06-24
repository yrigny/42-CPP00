CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = PhoneBook.cpp Contact.cpp

OBJ = $(SRC:.cpp=.o)

NAME = PhoneBook

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

$(OBJ): %.o: %.cpp %.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re