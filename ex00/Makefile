NAME := a.out
CXX := c++
RM := rm -f
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

SRCS := main.cpp\
		Bureaucrat.cpp

HEADERS := Bureaucrat.hpp\

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)

.PHONY: all clean fclean re