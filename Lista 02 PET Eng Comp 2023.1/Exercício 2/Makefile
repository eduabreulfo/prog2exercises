
TARGET = ex2

all: $(TARGET)

$(TARGET):
	gcc ex2.c vector.c vector.h -o ex2 -Wall

run:
	./$(TARGET)

valgrind:
	valgrind ./$(TARGET)

clean:
	rm $(TARGET)