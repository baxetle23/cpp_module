CC=clang++
CFLAGS=-c -Wall -Wextra -Werror  -std=c++98
LDFLAGS=
SOURCES=Account.cpp test.cpp
HEDEAR=Account.hpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=Account

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