CXX = g++
CXXFLAGS = -Wall
LDFLAGS =
OBJFILES = main.o worker.o
TARGET = PE03

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(OBJFILES) $(TARGET)