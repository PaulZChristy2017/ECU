CC = gcc
CFLAGS = -o start
LDFLAGS = -lm

OBJS = priority.o prioritymain.o

a.out: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS)

clean: 
	rm $(OBJS) start
