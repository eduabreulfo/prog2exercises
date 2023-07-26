
TARGET = main

ENTRADA = entrada
SAIDA = saida

all:
	gcc -o $(TARGET) *.c -Wall

run:
	./$(TARGET)

test:
	./$(TARGET) < $(ENTRADA) > $(SAIDA)

valgrind:
	valgrind ./$(TARGET)

valtest:
	valgrind ./$(TARGET) < $(ENTRADA) > $(SAIDA)

clean:
	rm $(TARGET)