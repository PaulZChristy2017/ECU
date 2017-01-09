CC = gcc
CFLAGS = -o run
LDFLAGS = -lm

OBJS = alg_main.o alg2rpn_fsm.o stack_float.o prototypes.o stack_char.o fsm_math.o 


a.out: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS)

clean: 
	rm $(OBJS) run
