CC=gcc
CFLAGS=
DEPS= cliente.h
OBJ= main.o cliente.o

%.o: %.c $(DEPS)
    $(CC) -c -o $@ $< $(CFLAGS)

ponto: $(OBJ)
    $(CC) -o $@ $^ $(CFLAGS)

clean:
    rm -rf *.o principal

run:
    ./principal
