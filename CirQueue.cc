#include<iostream>
using namespace std;
#include "CirQueue.h"

int main()
{
  CirQueue<int>* Q=new CirQueue<int>();
  Q->InitQueue();
  for(int i=1;i<20;i++)
    Q->EnQueue(i);
  return 0;
}

