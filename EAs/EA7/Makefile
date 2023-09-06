
TARGET = EA7

all: $(TARGET)

$(TARGET):
	gcc -o $(TARGET) *.c -Wall

run:
	./$(TARGET)

valgrind:
	valgrind ./$(TARGET)

clean:
	rm $(TARGET)