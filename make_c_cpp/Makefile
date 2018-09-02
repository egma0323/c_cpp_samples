PROGRAM = test
INCLUDE_DIR = \
	-I/usr/include \
	-I/usr/local/include/
CPPFLAGS = -g -Wall -std=c++0x $(INCLUDE_DIR)
CFLAGS = -g -O0 -Wall -DDEBUG $(INCLUDE_DIR)
LDLIBS = \
	-L/usr/lib \
	-L/usr/local/lib
SRC_CPP = \
	main.cpp
SRC_C = \
	func.c
OBJS = $(SRC_CPP:.cpp=.o)
OBJS += $(SRC_C:.c=.o)
LDFLAGS = \
	-lstdc++
CXX = g++
CC = gcc

.PHONY: debug
debug: all

.PHONY: release
release:CPPFLAGS = -O2 $(INCLUDE_DIR)
release:CFLAGS = -O2 $(INCLUDE_DIR)
release: all

all : $(PROGRAM)

$(PROGRAM) : $(OBJS) 
	$(CXX) $(CPPFLAGS) -o $(PROGRAM) $(OBJS) $(LDLIBS) $(LDFLAGS)

.c.o:
	$(CC) -c $< $(CFLAGS)
.cpp.o:
	$(CXX) -c $< $(CPPFLAGS)

clean :
	rm -vf *.o $(PROGRAM)
