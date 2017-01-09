CC = gcc
CFLAGS = -o run
LDFLAGS = -lm

OBJS = binarymain.o binary.o

a.out: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS)

clean: 
	rm $(OBJS) run
