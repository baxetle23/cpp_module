CC=clang++
CFLAGS=-c -Wall -Wextra -Werror -std=c++98
LDFLAGS=
SOURCES=main.cpp HumanA.cpp HumanB.cpp  Weapon.cpp
HEDEAR=HumanA.hpp HumanB.hpp  Weapon.hpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=weapon

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