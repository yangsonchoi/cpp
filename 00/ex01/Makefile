NAME		= PhoneBook

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -I..
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

OBJS_DIR	= ./
OBJS_LIST	= $(patsubst %.c, %.o, $(SRCS_LIST))
OBJS	= $(addprefix $(OBJS_DIR), $(OBJS_LIST))

all: $(NAME)

%.o: %.cpp %.hpp
	$(LINT) $^
	$(CXX) $(CXXFLAGS) -c $<

main.o: main.cpp
	$(LINT) $<
	$(CXX) $(CXXFLAGS) -c $<

$(NAME): $(OBJS) main.o
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	$(RM) $(RMFLAGS) $(OBJS) main.o

fclean: clean
	$(RM) $(RMFLAGS) $(NAME)

.PHONY: all clean fclean re