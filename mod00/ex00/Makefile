NAME = Megaphone

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME) : Megaphone.cpp
	cpplint $<
	$(CXX) $(CXXFLAGS) -o $@ $<

all : $(NAME)

fclean :
	rm -f $(NAME)

.PHONY: all fclean
