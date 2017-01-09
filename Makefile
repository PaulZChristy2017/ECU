CC = gcc
CFLAGS = -o solve
LDFLAGS = -lm

OBJS = menu2.o complexIO.o math.o 

a.out: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS)

clean: 
	rm $(OBJS) solve
