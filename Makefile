SRC = ./ft_count_return.c ./ft_percentage_p.c ./ft_printf.c ./ft_putchar.c\
./ft_putnbr_base.c ./ft_putnbr.c ./ft_putstr.c ./ft_strlen.c ./ft_uns_putnbr.c\
./ft_puthex.c

OBJ = ${SRC:.c=.o}

NAME = libftprintf.a

HEAD = includes

GCC = gcc

FLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar rcs

RANLIB = ranlib

.c.o:
		${GCC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${HEAD}

${NAME}:${OBJ}
		${AR} ${NAME} ${OBJ}
		${RANLIB} ${NAME}

all: 	${NAME}

clean: 
		${RM} ${OBJ}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

norm:
		norminette -R CheckForbiddenSourceHeader *.c
		norminette -R CheckDefine *.h
