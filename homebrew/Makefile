CXX=g++
STD=-std=gnu++17
INC=-I/opt/homebrew/include/mongocxx/v_noabi/ \
	-I/opt/homebrew/include/bsoncxx/v_noabi
LIB=-L/opt/homebrew/lib/
LD_FLAGS=-lmongocxx

example: example.cpp
	$(CXX) -o example $(STD) $(INC) example.cpp $(LIB) $(LD_FLAGS)

.PHONY: clean
clean:
	rm -f example
