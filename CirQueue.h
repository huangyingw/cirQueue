#include <iostream>
using namespace std;
#define QueueSize 10   //Ӧ���ݾ�����������ֵ

template <class Type> class CirQueue
{               
  public:
    int front;  //ͷָ�룬�ӷǿ�ʱָ���ͷԪ��            
    int rear;  //βָ�룬�ӷǿ�ʱָ���βԪ�ص���һλ��             
    int count;  //����������¼����Ԫ������
    Type data[QueueSize];
    int QueueEmpty();
    Type DeQueue();
    int QueueFront();
    void InitQueue();
    void Error(char* message);
    int QueueFull();
    void EnQueue(Type x);//�������
};
