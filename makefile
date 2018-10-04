all:
	gcc structs.c
run:
	./a.out

clean:
	rm *.o
	rm *.out
