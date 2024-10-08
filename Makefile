CFLAGS := -Wall -Werror -Wextra -pedantic -g3

NAME := hsh

SRC := $(wildcard *.c)

OBJ := $(SRC:.c=.o)

.PHONY := all clean

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $(CFLAGS) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(NAME)
