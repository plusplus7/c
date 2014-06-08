1_4_2:main.o func1.o func2.o
	gcc main.o func1.o func2.o -o 1_4_2
main.o:main.c func1.h func2.h
	gcc main.c -c
func1.o:func1.c
	gcc func1.c -c
func2.o:func2.c
	gcc func2.c -c
