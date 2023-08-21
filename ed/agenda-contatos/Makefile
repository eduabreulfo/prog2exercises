
TARGET = main

CFLAGS = -Wall

all:
	gcc $(CFLAGS) -o $(TARGET) *.c

run:
	./$(TARGET)

valgrind:
	valgrind ./$(TARGET)

clean:
	rm $(TARGET) $(TARGET).exe