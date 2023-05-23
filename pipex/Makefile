NAME = pipex

SRC = main.c \

SRCB =

FLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)
OBJB = $(SRCB:.c=.o)
all: $(NAME)

bonus: $(OBJB)
	ar rc $(NAME) $(OBJB)

$(NAME): $(OBJ)
	cc $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(OBJ) $(OBJB)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
