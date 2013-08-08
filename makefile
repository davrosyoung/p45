CC=cc
FLAGS=-c
LDFLAGS=
SOURCES=p45.c
EXECUTABLES=p45 p46

all: $(EXECUTABLES)

p45: p45.o myutils.o
	$(CC) $(LDFLAGS) $@.o -o $@

.o: $@.c
	$(CC) $(FLAGS) $@.c

clean:
	rm *.o p45