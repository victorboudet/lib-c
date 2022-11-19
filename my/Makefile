##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## test
##

FLAGS = -W -Wall -Werror -g3

DISPLAY = my_display/my_showstr.c

MATH = my_math/my_power_rec.c my_math/my_sqrt_whole.c

PUT = my_put/my_put_nbr.c my_put/my_putchar.c my_put/my_putnbr_base.c\
 my_put/my_putnbr_basint.c my_put/my_putstr.c

STRCHECK = my_str_check/my_isneg.c my_str_check/my_str_isalpha.c\
 my_str_check/my_str_islower.c my_str_check/my_str_isnum.c\
 my_str_check/my_str_isprintable.c my_str_check/my_str_isupper.c\
 my_str_check/my_strlen.c

STREDIT = my_str_edit/my_revstr.c my_str_edit/my_strcapitalize.c\
 my_str_edit/my_strlowcase.c my_str_edit/my_strupcase.c

TWOINT = my_two_int/my_swapint.c

TWOSTR = my_two_str/my_strcat.c my_two_str/my_strcmp.c my_two_str/my_strcpy.c\
 my_two_str/my_strncat.c my_two_str/my_strncmp.c my_two_str/my_strncpy.c

SRC = $(DISPLAY) $(MATH) $(PUT) $(STRCHECK) $(STREDIT) $(TWOINT) $(TWOSTR)
OBJ = $(SRC:.c=.o)
TARGET = libmy.a

all: $(TARGET)

$(TARGET): clean
	gcc -c $(SRC) -I./
	ar rc ../$(TARGET) *.o
	mkdir -p ../../include
	cp my.h ../../include/
	make clean

main:
	gcc main.c $(SRC) -I./ $(FLAGS)

re: fclean
	make all

fclean: clean
	rm -rf ../$(TARGET)

clean :
	rm -rf *.o
