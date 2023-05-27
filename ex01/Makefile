# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/24 23:20:21 by mcourtoi          #+#    #+#              #
#    Updated: 2023/05/27 12:55:39 by mcourtoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

######################################
#              COMMANDS              #
######################################
CXX			=	c++
LINK		=	clang++
MKDIR		=	mkdir -p
RM			=	rm -rf

######################################
#             EXECUTABLE             #
######################################
NAME		=	Brain

#######################################
#             DIRECTORIES             #
#######################################
SRC_DIR		=	src
OBJ_DIR		=	objs
PRV_DIR		=	private

######################################
#            SOURCE FILES            #
######################################
SRC			=						\
				${addprefix class/,	\
					Animal.cpp		\
					Cat.cpp			\
					Dog.cpp			\
					WrongAnimal.cpp	\
					WrongCat.cpp	\
					Brain.cpp		\
				}					\
				main.cpp

######################################
#            OBJECT FILES            #
######################################
OBJ			=	${SRC:.cpp=.o}
OBJ			:=	${addprefix ${OBJ_DIR}/, ${OBJ}}

DEP			=	${OBJ:.o=.d}

#######################################
#                FLAGS                #
#######################################
CXXFLAGS	=	-c
CXXFLAGS	+=	-Wall -Wextra -Werror
CXXFLAGS	+=	-MMD -MP
CXXFLAGS	+=	-Wshadow
CXXFLAGS	+=	-std=c++98
CXXFLAGS	+=	-I${PRV_DIR}

ifeq (${DEBUG}, 1)
	CXXFLAGS	+=	-g
	CXXFLAGS	+=	-DDEBUG=1
endif

#######################################
#                RULES                #
#######################################
${NAME}: ${OBJ}
	${LINK} $^ -o $@

all: ${NAME}

-include ${DEP}

${OBJ_DIR}/%.o: ${SRC_DIR}/%.cpp
	@${MKDIR} ${@D}
	${CXX} $< ${CXXFLAGS} -o $@

clean:
	${RM} ${OBJ_DIR} ${NAME} vgcore.*

fclean:
	${RM} ${OBJ_DIR} ${NAME} vgcore.*

re: clean all

fre: fclean all

.PHONY:	all clean fclean re fre
