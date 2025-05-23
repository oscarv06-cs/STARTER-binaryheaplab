# Makefile — lab05 “Implementing a min‑heap”
CXX       := g++
CXXFLAGS  := -std=c++20 -Wall -Wextra -pedantic -g
TARGET    := examheap
OBJS      := examheap.o heap.o    

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp heap.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: all clean
