NAME =push_swap

NAME_B = checker_bonus

LIBFT_NAME = libft/libft.a

LIBFT = libft/

SRC = main.c parcing.c push_node.c moves/push.c moves/rotate_reverse.c moves/rotate.c moves/swap.c \
	sort/sort_three.c sort/utils.c sort/sort_four.c sort/sort_five.c ft_index.c sort/sort_list.c

SRC_BONUS = main_bonus.c parcing.c push_node.c moves/push.c moves/rotate_reverse.c moves/rotate.c moves/swap.c \
	sort/sort_three.c sort/utils.c sort/sort_four.c sort/sort_five.c ft_index.c sort/sort_list.c get_next_line/get_next_line.c get_next_line/get_next_line_utils.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

OBJ_B = $(SRC_BONUS:.c=.o)

$(NAME) : $(OBJ)
	make all -C $(LIBFT)
	$(CC) $(OBJ) -o $(NAME) $(LIBFT_NAME)

bonus : $(OBJ_B)
	make all -C $(LIBFT)
	$(CC) $(OBJ_B) -o $(NAME_B) $(LIBFT_NAME)

all : $(NAME) bonus

clean :
	make clean -C $(LIBFT)
	rm -f $(OBJ)
	rm -f $(OBJ_B)

fclean : clean
	make fclean -C $(LIBFT)
	rm -f $(NAME)
	rm -f $(NAME_B)

re : fclean all
	make re -C $(LIBFT)
