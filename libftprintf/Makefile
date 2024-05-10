FILES = ft_printf \
		ft_putchar_pf \
		ft_putnbr_pf \
		ft_putstr_pf \
		ft_putptr_pf \
		ft_isalpha \
		ft_putdigit_pf \
		ft_putdigitupper_pf \
		ft_putdigitptr_pf \

COMPILER = cc

FLAGS = -Wall -Wextra -Werror -I.

SRCFILES = $(addsuffix .c,$(FILES))

OBJFILES = $(addsuffix .o,$(FILES))

NAME = libftprintf.a

all: $(NAME)

$(OBJFILES): %.o: %.c
	$(COMPILER) $(FLAGS) -c $< -o $@

$(BONUS_OBJ): %.o: %.c
	$(COMPILER) $(FLAGS) -c $< -o $@

$(NAME): $(OBJFILES)
	ar rcs $(NAME) $(OBJFILES)

clean:
	rm -f $(OBJFILES) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
