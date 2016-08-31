all: Main

Main: linked_list.o main.o
	gcc linked_list.o main.o -o main

linked_list.o: linked_list.c linked_list.h
	gcc -c linked_list.c

Main.o: main.c linked_list.h
	gcc -c main.c

clean:
	rm *.o main
