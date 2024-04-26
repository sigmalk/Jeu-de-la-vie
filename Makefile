CFLAGS = -Wno-implicit-function-declaration

main.o: main.c
	gcc $(CFLAGS) -c main.c

functions.o: functions.c
	gcc $(CFLAGS) -c functions.c

file: main.o functions.o
	gcc main.o functions.o -o file
	chmod +x ./file


