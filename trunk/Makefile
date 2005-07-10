NAME	=	mthgrabber
SRCS	=	mth.cpp switchboard.cpp
OBJS	=	$(SRCS:.cpp=.o)
VPATH	=	src/

CFLAGS	=	`wx-config --cflags`
CXXFLAGS=	$(CFLAGS)
LIB	=	`wx-config --libs`

CC	=	g++
CXX	=	$(CC)
RM	=	rm -f

$(NAME)	:	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(LIB)
all	:	$(NAME)

clean	:
		$(RM) $(OBJS) *~
fclean	:	clean
		$(RM) $(NAME)
re	:	fclean all

