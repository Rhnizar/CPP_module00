# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/09 18:45:13 by rrhnizar          #+#    #+#              #
#    Updated: 2023/08/13 10:30:53 by rrhnizar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = phonebook

SRC = PhoneBook.cpp Contact.cpp

OBJ = $(SRC:.cpp=.o)

CXX = c++

RFLAG = ${CXX} -Wall -Werror -Wextra -std=c++98

%.o : %.c
	${CXX} -c $< -o $@

all : ${Name}

${Name} : ${OBJ} PhoneBook.hpp
	${RFLAG} ${OBJ} -o ${Name}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${Name}

re : fclean all