PROGRAM = test
INCLUDE_DIR = \
	-I/usr/include \
	-I/usr/local/include/
CPPFLAGS = -g -Wall -std=c++0x $(INCLUDE_DIR)
LDLIBS = \
	-L/usr/lib \
	-L/usr/local/lib
SRC = \
	main.cpp
OBJS = $(SRC:.cpp=.o)
LDFLAGS = \
	-lstdc++
CXX = g++

.PHONY: debug
debug: all

.PHONY: release
release:CPPFLAGS = -O2 $(INCLUDE_DIR)
release: all

all : $(PROGRAM)

$(PROGRAM) : $(OBJS)
	$(CXX) $(CPPFLAGS) -o $(PROGRAM) $(OBJS) $(LDLIBS) $(LDFLAGS)

clean :
	rm -vf *.o $(PROGRAM)


