CC = gcc
CFLAGS = -o solvequad
LDFLAGS = -lm

OBJS = main.o solve_linear.o solve_quad.o solve_real.o solve_complex.o

a.out: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS)

clean: 
	rm $(OBJS) a.out
