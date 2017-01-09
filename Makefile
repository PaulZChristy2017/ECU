CC = gcc
CFLAGS = -o run
LDFLAGS = -lm

OBJS = stack.o stackmain.o

a.out: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS)

clean: 
	rm $(OBJS) run
