NAME = libft.a

SRC = 	*ft_memset.c ft_strlen.c ft_bzero.c ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcpy.c ft_memcmp.c ft_memmove.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcat.c ft_strlcpy.c ft_strnstr.c ft_tolower.c ft_toupper.c ft_calloc.c ft_strdup.c  ft_strjoin.c  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c ft_strtrim.c ft_strmapi.c ft_striteri.c ft_itoa.c ft_split.c
#BSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

CC = cc

CFLAGS = -Werror -Wextra -Wall -g3 #-fsanitize="address"

AR = ar rcs

RM = rm -f

OBJ = $(SRC:.c=.o)
#BOBJ = $(BSRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
#$(BOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
