NAME = libft.a
CC = gcc -Wall -Wextra -Werror
SRCS =  ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c
OBJS =  $(SRCS:.c=.o)
HEAD_PATH = ./includes/

all : $(NAME)
%.o : %.c
	$(CC) -c $< -o $@ -I $(HEAD_PATH)
$(NAME) : $(OBJS)
	ar -crs $(NAME) $(OBJS)
clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all

.PHONY : all clean fclean re
