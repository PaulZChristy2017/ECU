CC = gcc
CFLAGS = -o sorter
LDFLAGS = 

OBJS = main.o random.o sort.o

a.out: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS)

clean: 
	rm $(OBJS) sorter
