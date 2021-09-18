CC=clang++
CFLAGS=-c -Wall -Wextra -Werror -std=c++17
LDFLAGS=
SOURCES=main.cpp
HEDEAR=easyfind.hpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=find

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) $(HEDEAR)
	$(CC)  $(OBJECTS) $(LDFLAGS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(EXECUTABLE)

re: fclean all