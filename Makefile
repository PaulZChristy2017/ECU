CC = gcc
CFLAGS = -o start
LDFLAGS = -lm

OBJS = queue.o queuemain.o

a.out: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS)

clean: 
	rm $(OBJS) start
