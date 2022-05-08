
studentHeap: date.o main.o address.o student.o
	g++ date.o main.o address.o student.o -o studentHeap

date.o: date.cpp date.h 
	g++ -c date.cpp

address.o: address.cpp address.h
	g++ -c address.cpp

student.o: student.h student.cpp address.h date.h 
	g++ -c student.cpp 

main.o: main.cpp date.h address.h student.h
	g++ -c main.cpp


clean:
	rm -f*.o
	rm studentHeap



run: studentHeap
	/studentHeap


CC=g++
CFLAGS=-I.
DEPS = student.h address.h date.h
OBJ = student.o address.o date.o main.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
