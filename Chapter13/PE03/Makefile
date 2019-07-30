CXX = g++
CXXFLAG = -Wall
LDFLAGS =
OBJFILES = main.o dma.o
TARGET = PE03

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CXX) $(CXXFLAG) -o $(TARGET) $(OBJFILES) $(LDFLAGSP)

clean:
	rm -f $(OBJFILES) $(TARGET)