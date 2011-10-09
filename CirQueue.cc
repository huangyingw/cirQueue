#include "CirQueue.h"
template<class Type> int CirQueue<Type>::QueueEmpty()
{
  return count==0;  //队列无元素为空
}
