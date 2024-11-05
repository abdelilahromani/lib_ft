NAME = libft.a

CC = cc

HF = libft.h 

CFLAGS = -Wall -Wextra -Werror

LCC = ar rcs

SRCF = ft_atoi.c ft_calloc.c ft_isalpha.c ft_isdigit.c ft_itoa.c ft_memcmp.c \
	   ft_strlcat.c ft_strlen.c ft_strnstr.c ft_strtrim.c ft_tolower.c \
	   ft_bzero.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memchr.c ft_memcpy.c \
	   ft_strlcpy.c ft_strncmp.c ft_strrchr.c ft_substr.c ft_toupper.c ft_memset.c\
	   ft_memmove.c ft_split.c ft_strdup.c ft_strchr.c ft_strjoin.c ft_strmapi.c ft_striteri.c \

OBJF = ${SRCF:.c=.o}

%.o : %.c ${HF}
	$(CC) ${CFLAGS} -c $< -o $@
	${LCC} ${NAME} $@

all: $(NAME)

$(NAME): ${OBJF}

clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all 