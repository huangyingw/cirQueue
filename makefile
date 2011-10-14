main:
	g++ -fPIC -shared CirQueue.cc -o libCirQueue.so
	gcc -fPIC -L. test.cc -o test -lCirQueue
	export LD_LIBRARY_PATH=.
