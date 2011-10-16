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
    int QueueFull();
    void EnQueue(Type x);
};

template<class Type> int CirQueue<Type>::QueueEmpty()
{
  return count==0;
}

template<class Type> void CirQueue<Type>::Error(char* message)
{
  cout<<message<<endl;
}

template<class Type> Type CirQueue<Type>::DeQueue()
{
  Type temp;
  if(QueueEmpty())
    Error("Queue underflow");
  temp=data[front];
  count--;
  front=(front+1)%QueueSize;
  return temp;
}

template<class Type> int CirQueue<Type>::QueueFront()
{
  if(QueueEmpty())
    Error("Queue is empty.");
  return data[front];
}

template<class Type> void CirQueue<Type>::InitQueue()
{
  front=rear=0;
  count=0;
}

template<class Type> int CirQueue<Type>::QueueFull()
{
  return count==QueueSize;
}

template<class Type> void CirQueue<Type>::EnQueue(Type x)
{
  if(QueueFull())
  {
    cout<<"when try to input data:"<<x;
    Error("Queue overflow so shrow out");
    cout<<DeQueue()<<endl;
  }
  count++;
  data[rear]=x;
  rear=(rear+1)%QueueSize;
}
