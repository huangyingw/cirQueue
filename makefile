main:
	g++ -fPIC -shared CirQueue.hpp -o libCirQueue.so
	g++ -fPIC -L. test.cc -o test -lCirQueue
	export LD_LIBRARY_PATH=.
