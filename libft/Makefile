LIBRARY = libft

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
		ft_strjoin \
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

COMPILER = cc

FLAGS = -Wall -Wextra - Werror

OUTPUTNAME = $(LIBRARY).a

SRCFILES = $(files:%=%.c)

OBJFILES = $(files:%=%.o)

NAME = $(OUTPUTNAME)

$(NAME):
	$(COMPILER) $(FLAGS) -c $(SRCFILES) -I./
	ar -rc $(OUTPUTNAME) $(OBJFILES)

all: $(NAME)

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
