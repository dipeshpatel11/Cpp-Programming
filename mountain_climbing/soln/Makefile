OBJ = climbing.o
LINK_TARGET = we7_solution
REBUILDABLES = $(OBJ) $(LINK_TARGET)

CC = g++
CC_FLAGS = -Wall -O2 -g -c

all: $(LINK_TARGET)

$(LINK_TARGET): $(OBJ)
	$(CC) -o $(LINK_TARGET) $(OBJ)

climbing.o: climbing.cpp
	$(CC) $(CC_FLAGS) climbing.cpp

clean:
	rm -f $(REBUILDABLES)