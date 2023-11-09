NAME = PhoneBook

		#COMMAND#

CC				= c++
MKDIR			= mkdir -p
RM				= rm -rf

		#SOURCES#

SRCS			= PhoneBook.cpp


		#OBJECTS#

O_DIR			= objs
O_FILES			= $(SRCS:.cpp=.o)

		#FLAGS#

FLAGS			= -Wall -Wextra -Werror -std=c++98

		#INCLUDES#
INCLUDES		= PhoneBook.hpp

		#RULES#

all: ${NAME}

$(O_DIR):
				$(MKDIR) $(O_DIR)

$(O_DIR)/%.o: $(SRCS)
				$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(O_DIR) $(O_FILES)
			$(CC) $(O_FILES) $(FLAGS) -o $@

clean :
				$(RM) $(O_DIR)

fclean : clean
				$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
