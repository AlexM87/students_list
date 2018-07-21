# Variables
CCXX	 = clang++
STD		 = -std=c++14
SCRS	 = $(wildcard *.cpp)
OBJS	 = $(SCRS: .cpp = .o)
FLAGS = -Wall -Wextra -Wpedantic
NAME 	 = -o $@

# Rules
%.o : %.cpp %.hpp
	$(CCXX) $(STD) $(FLAGS)  -o $@ $<
studentsDebug.o: *.cpp *.hpp
	$(CCXX) $(OBJS) $(STD) $(FLAGS) $(NAME) -g
	
studentsRelese.o: *.cpp *.hpp
	$(CCXX) $(OBJS) $(STD) $(FLAGS) $(NAME) -O3
clean:
	rm $(OBJS) studentsRelese.o studentsDebug.o

