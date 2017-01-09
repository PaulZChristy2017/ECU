CC = gcc
CFLAGS =  -o sorter
LDFLAGS = -lm

OBJS = sorter_main.o random.o swap.o bubble.o bubble_flag.o binary_tree.o selection.o insertion_linked.o quick.o merge_sort.o radix.o heapsort.o shell.o

a.out: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS)

clean: 
	rm $(OBJS) sorter core
