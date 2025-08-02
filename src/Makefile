rectangle: RectangleTest.o Rectangle.o
	g++ RectangleTest.o Rectangle.o -o rectangle

Rectangle.o: Rectangle.cpp Rectangle.h
	g++ -c Rectangle.cpp

RectangleTest.o: RectangleTest.cpp Rectangle.h
	g++ -c RectangleTest.cpp

clean:
	rm -f *.o rectangle
