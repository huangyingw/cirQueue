#include <iostream>
using namespace std;
#define QueueSize 10   //应根据具体情况定义该值

template <class Type> class CirQueue
{               
  public:
    int front;  //头指针，队非空时指向队头元素            
    int rear;  //尾指针，队非空时指向队尾元素的下一位置             
    int count;  //计数器，记录队中元素总数
    Type data[QueueSize];
    int QueueEmpty();
    Type DeQueue();
    int QueueFront();
    void InitQueue();
    void Error(char* message);
    int QueueFull();
    void EnQueue(Type x);//加入队列
};
