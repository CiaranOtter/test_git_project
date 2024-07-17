all: 
	gcc -o test src/test.c

run:
	./test

clean:
	rm test