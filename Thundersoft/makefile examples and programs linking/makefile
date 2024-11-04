CC= gcc

output:operation.o program1.o
	$(CC) $^ -o $@
operation.o:operation.c
	$(CC) -c $< -o $@
program1.o:program1.c
	$(CC) -c $< -o $@
	
.PHONY :clean
clean:
	@rm -f *.o output
