calc: main.o calculator.o
	gcc main.o calculator.o -o calc

main.o: main.c calculator.h
	gcc -c main.c

calculator.o: calculator.c calculator.h
	gcc -c calculator.c

.PHONY: clean

clean:
	rm calc main.o calculator.o