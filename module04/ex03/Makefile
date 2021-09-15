CC=clang++
CFLAGS=-c  -Wall -Wextra -Werror -std=c++98
LDFLAGS=
SOURCES=main.cpp Cure.cpp Ice.cpp Materia.cpp Amateria.cpp Character.cpp ICharacter.cpp
HEDEAR=Amateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp Materia.hpp Character.hpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=Materia

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