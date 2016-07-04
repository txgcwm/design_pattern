CC = gcc
XX = g++
CFLAGS = -Wall -O -g -I./
LFLAGS = 
TARGET = test

SOURCES = $(wildcard *.c *.cpp)
OBJS = $(patsubst %.c,%.o, $(patsubst %.cpp, %.o, $(SOURCES)))

$(TARGET) : $(OBJS)
	$(XX) -o $(TARGET) $(OBJS) $(CFLAGS) $(LFLAGS) 

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o:%.cpp
	$(XX) $(CFLAGS) -c $< -o $@

clean:
	rm -f ${TARGET} *.o
