NAME =push_swap

LIBFT_NAME = tools/libft/libft.a

LIBFT = tools/libft/

SRC = main.c parcing.c push_node.c moves/push.c moves/rotate_reverse.c moves/rotate.c moves/swap.c \
	sort/sort_three.c sort/utils.c sort/sort_four.c sort/sort_five.c ft_index.c sort/sort_list.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

$(NAME) : $(OBJ)
	make all -C $(LIBFT)
	$(CC) $(OBJ) -o $(NAME) $(LIBFT_NAME)

all : $(NAME)

clean :
	make clean -C $(LIBFT)
	rm -f $(OBJ)

fclean : clean
	make fclean -C $(LIBFT)
	rm -f $(NAME)

re : fclean all
	make re -C $(LIBFT)
