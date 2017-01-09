CC = gcc
CFLAGS = -o run
LDFLAGS = -lm

OBJS = main.o fsm_math.o stack_float.o 


a.out: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS)

clean: 
	rm $(OBJS) run
