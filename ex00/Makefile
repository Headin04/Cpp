CC=c++
CFLAGS=-std=c++98 -Wall -Wextra -Werror

all: megaphone

megaphone: megaphone.o  
	$(CC) $(CFLAGS) -o megaphone megaphone.o

megaphone.o: megaphone.cpp
	$(CC) $(CFLAGS) -c megaphone.cpp

clean:
	rm -f megaphone.o

fclean: clean
	rm -f megaphone

re: fclean all

.PHONY: all clean fclean re
