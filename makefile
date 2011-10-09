CirQueue.o :CirQueue.cc
	gcc -c CirQueue.cc
liblt.so :
	gcc -shared -Wall -fPIC CirQueue.o -o liblt.so  
CirQueue.exe :
	gcc -o CirQueue.exe test.o -lCirQueue -B .
