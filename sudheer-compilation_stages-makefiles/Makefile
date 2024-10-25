CC = g++
CFlags = -Wall -g -O2 -std=c++11
TARGET = basic

SRC = basic.cpp
PREPROCESSED = s.i
ASSEMBLY = s.s
OBJECT = s.o

all: $(TARGET)

$(PREPROCESSED): $(SRC)
	$(CC) -E $(SRC) -o $(PREPROCESSED)

$(ASSEMBLY): $(SRC)
	$(CC) -S $(SRC) -o $(ASSEMBLY)

$(OBJECT): $(SRC)
	$(CC) -c $(SRC) -o $(OBJECT)

$(TARGET): $(OBJECT)
	$(CC) $(CFlags) $(OBJECT) -o $(TARGET)

clean:
	rm -f $(PREPROCESSED) $(ASSEMBLY) $(OBJECT) $(TARGET)