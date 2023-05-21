OBJECTS = main.o heap.o 
TEST_OBJECTS = tests.o heap.o

main: $(OBJECTS)
	g++ -o main $(OBJECTS)

tests: $(TEST_OBJECTS)
	g++ -o tests $(TEST_OBJECTS)
main.o: main.cpp heap.h

tests.o: tests.cpp heap.h

heap.o: heap.cpp heap.h

clean:
	rm -f $(OBJECTS) $(TEST_OBJECTS)
