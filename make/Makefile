OBJS = main.o mytool1.o mytool2.o
CC = gcc

all:$(OBJS)
	$(CC) -o $@ $^
main.o: main.c
	$(CC) -c $< -o $@
mytool1.o: mytool1.c
	$(CC) -c $< -o $@
mytool2.o: mytool2.c
	$(CC) -c $< -o $@

.PHONY: clean cl
clean:
	rm -rf all *.o
cl:
	rm -rf all *.o
