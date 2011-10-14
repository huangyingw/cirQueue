#include <iostream>
using namespace std;
#define QueueSize 10

template <class Type> class CirQueue
{               
  public:
    int front;
    int rear;
    int count;
    Type data[QueueSize];
    int QueueEmpty();
    Type DeQueue();
    int QueueFront();
    void InitQueue();
    void Error(char* message);
};
