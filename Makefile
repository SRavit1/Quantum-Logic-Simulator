#compiler
CC = g++
#the build target executable
TARGET = Qubit

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	sudo $(CC) $(TARGET).cpp

clean:
	sudo rm -rf ./a.out