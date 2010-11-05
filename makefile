run : CirQueue.o
	g++ -o run CirQueue.o
CirQueue.o : CirQueue.cpp
	g++ -c CirQueue.cpp
clean :
	rm run CirQueue.o
