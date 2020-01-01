
SRC=test_hello_world.cpp
CXXFLAGS= -std=c++11 -I$(HOME)/local/include -I/usr/include -L$(HOME)/local/lib -lglfw -L$(HOME)/local/nvidia-410/lib -lGL -lrt -lpthread -ldl
BIN=hello_world
all: $(BIN)

$(BIN): $(SRC)
	g++ -o $@ $< $(CXXFLAGS)
	#g++ -o $@ $(CXXFLAGS) $<  # error, src file should be put ahead of flags

clean:
	rm -f $(BIN)
