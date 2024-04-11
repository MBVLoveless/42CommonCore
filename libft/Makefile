Library = libft

Files = ft_atoi \
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

Compiler = cc

Flags = -Wall -Wextra - Werror

OutputName = $(Library).a

SrcFiles = $(files:%=%.c)

ObjFiles = $(files:%=%.o)

NAME = $(OutputName)

$(NAME):
	$(Compiler) $(Flags) -c $(SrcFiles) -I./
	ar -rc $(OutputName) $(ObjFiles)

all: $(NAME)

clean:
	rm -f $(ObjFiles)

fclean: clean
	rm -f $(NAME)

re: fclean all