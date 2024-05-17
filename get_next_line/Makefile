FILES = get_next_line \
		get_next_line_utils \

COMPILER = cc

FLAGS = -Wall -Wextra -Werror -I.

SRCFILES = $(addsuffix .c,$(FILES))

OBJFILES = $(addsuffix .o,$(FILES))

NAME = get_next_line.a

all: $(NAME)

$(OBJFILES): %.o: %.c
	$(COMPILER) $(FLAGS) -c $< -o $@

$(NAME): $(OBJFILES)
	ar rcs $(NAME) $(OBJFILES)

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
