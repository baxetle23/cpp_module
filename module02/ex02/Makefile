CC=clang++
CFLAGS=-c  -std=c++98
LDFLAGS=
SOURCES=main.cpp Fixed.cpp
HEDEAR=Fixed.hpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=Fixed

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