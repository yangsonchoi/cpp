# Copyright 2022 Yangson Choi. All rights reserved.

NAME = SedIsForLosers
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
LINT = cpplint

$(NAME): main.cpp
	$(LINT) $<
	$(CXX) $(CXXFLAGS) -o $@ $<

all : $(NAME)

clean :
	rm -f $(NAME)

fclean : clean

re : fclean $(NAME)

.PHONY: all clean fclean re