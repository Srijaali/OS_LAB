CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRC = main.cpp lettercount.cpp wordcount.cpp linecount.cpp
OBJ = $(SRC:.cpp=.o)
EXE = textcounter

all: $(EXE)

$(EXE): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(EXE) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXE)
