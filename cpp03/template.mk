ifndef TARGET
	TARGET = a.out
endif

ifndef SRCS
	SRCS =
endif

CXX = c++
CXXFLAGS = -Wall -Wextra -std=c++98 -Wshadow -Wno-shadow
OBJS_DIR = objs/
OBJS = $(addprefix $(OBJS_DIR), $(SRCS:.cpp=.o))

all : $(TARGET)

$(OBJS_DIR) :
	mkdir -p $(OBJS_DIR)

$(TARGET) : $(OBJS_DIR) $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

$(addprefix $(OBJS_DIR), %.o) : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS_DIR)

fclean : clean
	rm -f $(TARGET)

re :
	make fclean
	make all

.PHONY: all clean fclean re
