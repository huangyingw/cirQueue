#include "CirQueue.h"
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
