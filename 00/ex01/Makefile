NAME		= PhoneBook

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
INCLDUES	= -I$(HDRS_DIR)

RM 			= rm
RMFLAGS		= -rf

LINT 		= cpplint

HDRS_DIR	= ./
HDRS_LIST	= PhoneBook.hpp
HDRS		= $(addprefix $(HDRS_DIR), $(HDRS_LIST))

SRCS_DIR	= ./
SRCS_LIST	= Main.cpp			\
						PhoneBook.cpp
SRCS		= $(addprefix $(SRCS_DIR), $(SRCS_LIST))

OBJS_DIR	=  ./
OBJS_LIST	= $(patsubst %.c, %.o, $(SRCS_LIST))
OBJS	= $(addprefix $(OBJS_DIR), $(OBJS_LIST))

all : $(NAME)

$(NAME) :$(OBJS_DIR) $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)

$(OBJS_DIR)%.o : $(SRCS_DIR)%.c $(HDRS)
	$(CXX) $(CXXFLAGS) -c $(INCLUDES) $< -o $@

clean :
	$(RM) $(RMFLAGS) $(OBJS_DIR) $(OBJS)

fclean : clean
	$(RM) $(RMFLAGS) $(NAME)

re : fclean $(NAME)

.PHONY : all clean fclean re