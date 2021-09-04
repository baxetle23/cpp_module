CC=clang++
CFLAGS=-c -Wall -Wextra -Werror -std=c++98
LDFLAGS=
SOURCES=main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
HEDEAR=Zombie.hpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=zombie

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