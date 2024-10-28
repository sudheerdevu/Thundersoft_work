#create dir
all:create_dir create_file today
	
create_dir:
	@mkdir -p d1 d2 d3
create_file:
	@touch 1.c 2.c 3.c

#clean
clean:
	@rm -rf d*
	@rm -f *.c
today:
	@echo "today is $(shell date)"

.PHONY: clean
