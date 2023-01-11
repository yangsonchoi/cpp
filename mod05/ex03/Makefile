#Copyright 2023 Yangson Choi. All rights reserved.

NAME		= InternNobody

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
INCLUDES	= -I$(HDRS_DIR)

RM 			= rm
RMFLAGS		= -rf

LINT 		= cpplint

HDRS_DIR	= ../
HDRS_LIST	= ex03/Bureaucrat.hpp								\
						ex03/AForm.hpp										\
						ex03/ShrubberyCreationForm.hpp		\
						ex03/RobotomyRequestForm.hpp			\
						ex03/PresidentialPardonForm.hpp		\
						ex03/Intern.hpp

HDRS		= $(addprefix $(HDRS_DIR), $(HDRS_LIST))

SRCS_DIR	= ./
SRCS_LIST	= main.cpp										\
						Bureaucrat.cpp							\
						AForm.cpp										\
						ShrubberyCreationForm.cpp		\
						RobotomyRequestForm.cpp			\
						PresidentialPardonForm.cpp	\
						Intern.cpp

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
