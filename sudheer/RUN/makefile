

CC= gcc
CFLAGS= -Wall -g
output: test.o
	@$(CC) $< -lm -o $@
test.o: test.c
	@$(CC) -c $< -o $@
clean:
	@rm -f *.o output