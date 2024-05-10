FILES = ft_atoi \
		ft_bzero \
		ft_calloc \
		ft_isalnum \
		ft_isalpha \
		ft_isascii \
		ft_isdigit \
		ft_isprint \
		ft_memchr \
		ft_memcmp \
		ft_memcpy \
		ft_memmove \
		ft_memset \
		ft_strchr \
		ft_strdup \
		ft_strlcat \
		ft_strlcpy \
		ft_strlen \
		ft_strncmp \
		ft_strnstr \
		ft_strrchr \
		ft_tolower \
		ft_toupper \
		ft_substr \
		ft_strjoin \
		ft_strtrim \
		ft_split \
		ft_itoa \
		ft_strmapi \
		ft_striteri \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \

BONUS = ft_lstnew \
		ft_lstadd_front \
		ft_lstsize \
		ft_lstlast \
		ft_lstadd_back \
		ft_lstdelone \
		ft_lstclear \
		ft_lstiter \
		ft_lstmap \

COMPILER = cc

FLAGS = -Wall -Wextra -Werror -I.

SRCFILES = $(addsuffix .c,$(FILES))

OBJFILES = $(addsuffix .o,$(FILES))

BONUS_SRC = $(addsuffix .c,$(BONUS))

BONUS_OBJ = $(addsuffix .o,$(BONUS))

NAME = libft.a

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

bonus: $(OBJFILES) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJFILES) $(BONUS_OBJ)

.PHONY: all clean fclean re bonus
