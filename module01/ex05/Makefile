CC=clang++
CFLAGS=-c -Wall -Wextra -Werror -std=c++98
LDFLAGS=
SOURCES=main.cpp Karen.cpp
HEDEAR=
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=Karen

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