SRC=$(wildcard *.c)

all: $(SRC)
	gcc -g -o test $^ $(CFLAGS) $(LIBS) -lpthread

clean:
	rm -f test *.o
