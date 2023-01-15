C = g++
CFLAG = -std=c++11
EX = we3_solution
OBJS = we3_test.o ref_manager.o

all : $(EX)

$(EX) : we3_test.cpp ref_manager.cpp
	 $(C) -c we3_test.cpp ref_manager.cpp
	 $(C) -o $(EX) we3_test.o ref_manager.o $(CFLAG)

clean: 
	rm -f $(OBJS) $(EX)
