CC = gcc
SRC = *.c
OBJ = $(SRC:.c=.o)
NAME = school
RM = rm -f
CFLAGS =  -Wall -Werror -Wextra -pedantic
all:$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

objects: $(SRC)
	$(CC) $(CFLAGS) -c $(SRC) 

static_library: $(OBJ)
	ar rcs libmy.a $(OBJ)

clean:
	$(RM) *~ $(NAME)

oclean:
	$(RM) $(OBJ)
fclean: clean oclean
re: oclean all
