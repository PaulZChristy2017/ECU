CC = gcc
CFLAGS = -o run
LDFLAGS = -lm

OBJS = delim_main.o delim_sub.o delim_fsm.o


a.out: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS)

clean: 
	rm $(OBJS) run
