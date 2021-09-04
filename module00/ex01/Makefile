CC=clang++
CFLAGS=-c -Wall -Wextra -Werror -std=c++98
LDFLAGS=
SOURCES=phone_book.cpp main.cpp
HEDEAR=phone_book.hpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=phone_book

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