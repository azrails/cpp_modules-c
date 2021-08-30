NAME = replace

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS =  -std=c++98

%.o: %.cpp
	clang++ $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME):	$(OBJ)
			clang++ $(FLAGS) -o $(NAME)  $(OBJ)

clean:
			rm -rf $(OBJ)

fclean: clean
			rm -rf $(NAME)
		
re: fclean all

.PHONY: re fclean clean all
