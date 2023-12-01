CC=g++
CFLAGS=-I./src

Task1_Project: src/main.o src/helper.o
	$(CC) -o Task1_Project src/main.o src/helper.o

src/main.o: src/main.cpp
	$(CC) -c -o src/main.o src/main.cpp

src/helper.o: src/helper.cpp
	$(CC) -c -o src/helper.o src/helper.cpp

clean:
	rm -f Task1_Project src/main.o src/helper.o
