#Copyright 2022 Yangson Choi. All rights reserved.

NAME		= FragTrap

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
INCLUDES	= -I$(HDRS_DIR)

RM 			= rm
RMFLAGS		= -rf

LINT 		= cpplint

HDRS_DIR	= ../
HDRS_LIST	= ex02/ClapTrap.hpp	\
						ex02/ScavTrap.hpp	\
						ex02/FragTrap.hpp
HDRS		= $(addprefix $(HDRS_DIR), $(HDRS_LIST))

SRCS_DIR	= ./
SRCS_LIST	= main.cpp				\
						ClapTrap.cpp		\
						ScavTrap.cpp		\
						FragTrap.cpp
SRCS		= $(addprefix $(SRCS_DIR), $(SRCS_LIST))

OBJS_DIR	=  object/
OBJS_LIST	= $(patsubst %.cpp, %.o, $(SRCS_LIST))
OBJS	= $(addprefix $(OBJS_DIR), $(OBJS_LIST))

all : $(NAME)

$(NAME) :$(OBJS_DIR) $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)

$(OBJS_DIR) : 
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)%.o : $(SRCS_DIR)%.cpp $(HDRS)
	$(LINT) $<
	$(CXX) $(CXXFLAGS) -c $(INCLUDES) $< -o $@

clean :	
	$(RM) $(RMFLAGS) $(OBJS_DIR) $(OBJS)

fclean : clean
	$(RM) $(RMFLAGS) $(NAME)

re : fclean $(NAME)

.PHONY : all clean fclean re
