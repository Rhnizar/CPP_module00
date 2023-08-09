# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/09 18:05:32 by rrhnizar          #+#    #+#              #
#    Updated: 2023/08/09 18:44:38 by rrhnizar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = Megaphone

SRC = megaphone.cpp


OBJ = $(SRC:.cpp=.o)

CXX = c++

RFLAG = ${CXX} -Wall -Werror -Wextra -std=c++98

%.o : %.c
	${CXX} -c $< -o $@

all : ${Name}

${Name} : ${OBJ}
	${RFLAG} ${OBJ} -o ${Name}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${Name}

re : fclean all