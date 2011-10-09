#include "CirQueue.h"
template<class Type> int CirQueue<Type>::QueueEmpty()
{
  return count==0;  //队列无元素为空
}

template<class Type> void CirQueue<Type>::Error(char* message)
{
  cout<<message<<endl;
}

template<class Type> Type CirQueue<Type>::DeQueue()
{
  Type temp;
  if(QueueEmpty())
    Error("Queue underflow");     //队空下溢
  temp=data[front];
  count--;                        //队列元素个数减1
  front=(front+1)%QueueSize;   //循环意义下的头指针加1
  return temp; 
}

//取得队列front数据
template<class Type> int CirQueue<Type>::QueueFront()
{
  if(QueueEmpty())
    Error("Queue is empty.");
  return data[front];
}

template<class Type> void CirQueue<Type>::InitQueue()
{
  front=rear=0;
  count=0;     //计数器置0
}

template<class Type> int CirQueue<Type>::QueueFull()
{
  return count==QueueSize;  //队中元素个数等于QueueSize时队满
}


template<class Type> void CirQueue<Type>::EnQueue(Type x)//加入队列
{
  if(QueueFull())                   
  {
    cout<<"when try to input data:"<<x;
    Error("Queue overflow so shrow out");     //队满上溢
    cout<<DeQueue()<<endl;
  }
  count++;                        //队列元素个数加1
  data[rear]=x;                 //新元素插入队尾
  rear=(rear+1)%QueueSize;      //循环意义下将尾指针加1
}
