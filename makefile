main:
	g++ -shared CirQueue.cc -o CirQueue.so
	gcc -L. test.cc -o test -lCirQueue
	export LD_LIBRARY_PATH=.
