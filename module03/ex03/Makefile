CC=clang++
CFLAGS=-c -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98
LDFLAGS=
SOURCES=main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp 
HEDEAR=ClapTrap.hpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=DiamondTrap

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