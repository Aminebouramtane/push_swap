NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

FILES = ft_memset.c		\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memmove.c 	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strlen.c		\
		ft_isalpha.c 	\
		ft_isdigit.c		\
		ft_isalnum.c		\
		ft_isascii.c		\
		ft_isprint.c		\
		ft_toupper.c		\
		ft_tolower.c		\
		ft_strchr.c		\
		ft_strrchr.c		\
		ft_strncmp.c		\
		ft_strlcpy.c		\
		ft_strlcat.c		\
		ft_strnstr.c		\
		ft_striteri.c	\
		ft_atoi.c		\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_substr.c		\
		ft_strjoin.c 	\
		ft_strtrim.c		\
		ft_split.c		\
		ft_itoa.c		\
		ft_strmapi.c		\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c

BONUS =	ft_lstnew_bonus.c			\
		ft_lstadd_front_bonus.c	\
		ft_lstsize_bonus.c		\
		ft_lstlast_bonus.c		\
		ft_lstadd_back_bonus.c	\
		ft_lstclear_bonus.c		\
		ft_lstdelone_bonus.c		\
		ft_lstiter_bonus.c		\
		ft_lstmap_bonus.c

FILES_O = $(FILES:.c=.o)

BONUS_O = $(BONUS:.c=.o)


all  : $(NAME) bonus

$(NAME) : $(FILES_O)
	ar -r $(NAME) $(FILES_O)

bonus : $(BONUS_O)

$(BONUS_O) : $(BONUS)
	cc $(CFLAGS) -c $(BONUS)
	ar -r $(NAME) $(BONUS_O)


clean :
	rm -f $(FILES_O) $(BONUS_O)


fclean : clean
	rm -f libft.a

re : fclean all
