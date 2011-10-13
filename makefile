main:
	g++ -shared CirQueue.cc -o CirQueue.so
	g++ -L. test.cc -o test -lCirQueue
	export LD_LIBRARY_PATH=.
