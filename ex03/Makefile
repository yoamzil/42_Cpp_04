CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98
NAME		=	AMateria
SRCS		=	main.cpp AMateria.cpp ICharacter.cpp Ice.cpp Cure.cpp
OBJS		=	$(SRCS:.cpp=.o)
HFS			=	AMateria.hpp ICharacter.hpp Ice.hpp Cure.hpp

%.o			:	%.cpp $(HFS)
				$(CXX) $(CXXFLAGS) -c $< -o $@

all			:	$(NAME)

$(NAME)		:	$(OBJS) $(HFS)
				$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean		:
				rm -f $(OBJS)

fclean		:	clean
				rm -f $(NAME)

re			:	fclean all

.PHONY		:	clean fclean all re