CXX = g++
CXXFLAGS = -Wall
LDFLAGS =
OBJFILES = main.o port.o vintageport.o
TARGET = PE04

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(OBJFILES) $(TARGET)