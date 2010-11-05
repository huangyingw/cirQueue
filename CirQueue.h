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

template<class Type> int CirQueue<Type>::QueueEmpty()
{
  return count==0;  //������Ԫ��Ϊ��
}

template<class Type> void CirQueue<Type>::Error(char* message)
{
  cout<<message<<endl;
}

template<class Type> Type CirQueue<Type>::DeQueue()
{
  Type temp;
  if(QueueEmpty())
    Error("Queue underflow");     //�ӿ�����
  temp=data[front];
  count--;                        //����Ԫ�ظ�����1
  front=(front+1)%QueueSize;   //ѭ�������µ�ͷָ���1
  return temp; 
}

//ȡ�ö���front����
template<class Type> int CirQueue<Type>::QueueFront()
{
  if(QueueEmpty())
    Error("Queue is empty.");
  return data[front];
}

template<class Type> void CirQueue<Type>::InitQueue()
{
  front=rear=0;
  count=0;     //��������0
}

template<class Type> int CirQueue<Type>::QueueFull()
{
  return count==QueueSize;  //����Ԫ�ظ�������QueueSizeʱ����
}


template<class Type> void CirQueue<Type>::EnQueue(Type x)//�������
{
  if(QueueFull())                   
  {
    cout<<"when try to input data:"<<x;
    Error("Queue overflow so shrow out");     //��������
    cout<<DeQueue()<<endl;
  }
  count++;                        //����Ԫ�ظ�����1
  data[rear]=x;                 //��Ԫ�ز����β
  rear=(rear+1)%QueueSize;      //ѭ�������½�βָ���1
}
