CXX = g++
CXXFLAGS = -ggdb -Wall
LDFLAGS =
OBJFILES = main.o cd.o classic.o
TARGET = PE02

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(OBJFILES) $(TARGET)