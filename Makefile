INCLUDE := cs50.h


work.out: cs50.o test.o                                                                                                                  
	gcc -o work cs50.o test.o -g -lm -Wall -Werror
test.o: test.c
	gcc -c test.c -g -Wall -Aerror
cs50.o: cs50.c cs50.h
	gcc -c cs50.c -g

clean:
	rm -f cs50.o test.o work
