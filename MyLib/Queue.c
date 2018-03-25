#include "Queue.h"

Queue queue_Byte;
Queue* Queue_Byte = &queue_Byte;

void ClearQueue( Queue *pQueue )
{
   (*pQueue).FrontData = (*pQueue).qBase[0].buffer;
   (*pQueue).Count = 0;
}

unsigned int GetCount(Queue *pQueue)
{
    return (*pQueue).Count;
}

unsigned int GetSize(Queue *pQueue)
{
    return (*pQueue).Size;
}

int GetHead(Queue *pQueue)
{
     if( (*pQueue).Count == 0  )
     {
         return -1;
     }
     return (*pQueue).Count-1;
}

int IndexOf(Queue *pQueue,QueueType value)  //从头开始找元素 返回第一个与之相同的元素 若存入结构体类型 则不可调用该函数
{
		 int i;
     if( (*pQueue).Count == 0  )
     {
         return -1;
     }
     for( i = pQueue->Count; i > 0; --i )
     {
         if(value == pQueue->qBase[i].buffer)
				 return GetHead(pQueue) - i;		 
     }
    return -1;
}

int EnQueue(Queue *pQueue , QueueType value)  //加入队列并返回队列中元素的个数
{
    int i = 0;
    if( (*pQueue).Count == (*pQueue).Size )
    {   
         pQueue->qBase = realloc( pQueue->qBase, 2 * pQueue->Size * sizeof(MyType *) );
			   if(pQueue->qBase == NULL)
				 {
							(*pQueue).qBase = (MyType *)malloc(sizeof(MyType)*1);
							if((*pQueue).qBase == NULL)
									return 0;
							(*pQueue).FrontData = (*pQueue).qBase->buffer;  
							(*pQueue).Size = 1;
							(*pQueue).Count = 0;
							return 0;           //如果分配内存失败 则删除队列中所有元素 空队列
				 }
         pQueue->Size = 2 * pQueue->Size;
    }
    for( i = pQueue->Count; i > 0; --i )
    {
         (pQueue->qBase[i]).buffer = (pQueue->qBase[i-1]).buffer; //移动队列
    }
    pQueue->qBase[0].buffer = value;
	  (*pQueue).FrontData = pQueue->qBase[pQueue->Count].buffer; //对头元素
	  return ++pQueue->Count;  //返回当前队列元素总数
}

QueueType GetInQueue(Queue *pQueue)   //从队列中取出队头元素，出队列
{
    QueueType pe = pQueue->FrontData;
     --pQueue->Count;
     pQueue->FrontData = pQueue->qBase[pQueue->Count-1].buffer;
	  return pe;
}

int DeQueue( Queue *pQueue, QueueType *pe )  //从队列中取出队头元素，出队列
{
     if( pQueue->Count == 0 )
     {
         return -1;
     }
     *pe = pQueue->FrontData;
     --pQueue->Count;
     pQueue->FrontData = pQueue->qBase[pQueue->Count-1].buffer;
     return pQueue->Count;
}

void DestroyQueue(Queue *pQueue)   //销毁队列
{
    free( pQueue->qBase ); 
	  pQueue = NULL;
}

void Queue_ForEach( Queue *pQueue, void (*func)(QueueType *pe) )
 {
     unsigned int i = 0;
     for( ; i < pQueue->Count; ++i )
     {
         func( &pQueue->qBase[i].buffer );
     }
	   pQueue->FrontData = pQueue->qBase[pQueue->Count-1].buffer;
}

void Acc (QueueType *p)
{
    (*p)++;
}

#ifdef HaveBool

bool CreateQueue(Queue *pQueue,unsigned int size)  //Create a queue with one * size unit RAM
{  
    (*pQueue).qBase = (MyType *)malloc(sizeof(MyType)*size);

    if((*pQueue).qBase == NULL)
    {
        return false;
    }
    (*pQueue).FrontData = (*pQueue).qBase->buffer;  
	(*pQueue).Size = size;
	(*pQueue).Count = 0;
	return true;
}

int GetQueueCapcity(Queue *pQueue)
{
    return pQueue->Size;
}

bool InitQueue(Queue *pQueue)   //Create a queue with one unit RAM
{  
    (*pQueue).qBase = (MyType *)malloc(sizeof(MyType)*1);

    if((*pQueue).qBase == NULL)
    {
        return false;
    }
    (*pQueue).FrontData = (*pQueue).qBase->buffer;  
	 (*pQueue).Size = 1;
	 (*pQueue).Count = 0;
	  return true;
}

bool Peek(Queue *pQueue,QueueType *pe)
{
     if( (*pQueue).Count == 0  )
     {
         return false;
     }
     *pe = pQueue->FrontData;
	 return true;
}

bool IsEmpty(Queue *pQueue)
{
    return (*pQueue).Count == 0 ? true : false;
}

#else

BOOL CreateQueue(Queue *pQueue,unsigned int size)
{  
    (*pQueue).qBase = (MyType *)malloc(sizeof(MyType)*size);

    if((*pQueue).qBase == NULL)
    {
        return FALSE;
    }
    (*pQueue).FrontData = (*pQueue).qBase->buffer;  
	(*pQueue).Size = size;
	(*pQueue).Count = 0;
	return TRUE;
}

BOOL InitQueue(Queue *pQueue)
{  
    (*pQueue).qBase = (MyType *)malloc(sizeof(MyType)*1);

    if((*pQueue).qBase == NULL)
    {
        return FALSE;
    }
    (*pQueue).FrontData = (*pQueue).qBase->buffer;  
	(*pQueue).Size = 1;
	(*pQueue).Count = 0;
	return TRUE;
}

BOOL Peek(Queue *pQueue,QueueType *pe)
{
     if( (*pQueue).Count == 0  )
     {
         return FALSE;
     }
     *pe = pQueue->FrontData;
	   return TRUE;
}

BOOL IsEmpty(Queue *pQueue)
{
    return (*pQueue).Count == 0 ? TRUE : FALSE;
}

#endif


