CC=clang++
CFLAGS=-c -Wall -Wextra -Werror -std=c++98
LDFLAGS=
SOURCES=megaphone.cpp
HEDEAR=
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=megaphone

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