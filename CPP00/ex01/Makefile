# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 22:14:13 by snuts             #+#    #+#              #
#    Updated: 2022/03/28 22:21:43 by snuts            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = My_Telephone_Book

SRCS	=	Contact.cpp\
			PhoneBook.cpp\
			main.cpp\

OBJS = $(SRCS:.cpp=.o)

# HEADER	=	PhoneBook.hpp\
# 			Contact.hpp\
# 			main.cpp

CC			=	c++
CFLAGS		=	-std=c++98 -Wall -Wextra -Werror
RM			=	rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(SRCS) $(CFLAGS) -o $(NAME)

%o:			%.c
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re