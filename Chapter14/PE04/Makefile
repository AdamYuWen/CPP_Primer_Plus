CXX = g++
CXXFLAGS = -Wall -Wno-comment
LDFLAGS =
OBJFILES = main.o person.o gunslinger.o pokerplayer.o baddude.o
TARGET = PE04

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(OBJFILES) $(TARGET)
