NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
AR = ar -rc
RM = rm -rf

CFILES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isprint.c ft_strchr.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c 

OBJ = $(CFILES:.c=.o)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

all : $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all