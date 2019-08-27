#include<iostream>
#include"StaticDoubleQueue.hpp"
namespace cs2
{

StaticDoubleQueue::capacity()
{
   return queueSize;
}
StaticDoubleQueue::StaticDoubleQueue(int number)
{
    StaticArray=new double[number];
    queueSize=number;
    Front=-1;
    Rear=-1;
    numberOfItems=0;
}
StaticDoubleQueue::StaticDoubleQueue(const StaticDoubleQueue& r)
{
       StaticArray= new double[r.queueSize];
       queueSize=r.queueSize;
       Front=r.Front;
       Rear=r.Rear;
       numberOfItems=r.numberOfItems;
        for (int i=0;i <r.queueSize;++i)
       {
           StaticArray[i]=r.StaticArray[i];
       }
}
StaticDoubleQueue& StaticDoubleQueue::operator=(const StaticDoubleQueue& r)
{

}

bool StaticDoubleQueue::enqueue(double number)
{
    if(isFull())
    {
        return false;
    }
    else
    {
    Rear=(Rear+1)%queueSize;
    StaticArray[Rear]=number;
    numberOfItems++;
    return true;
    }
}
bool StaticDoubleQueue::dequeue(double &number)
{
    if(isEmpty())
    {
    return false;
    }
    else
    {
    Front=(Front+1) % queueSize;
    number=StaticArray[Front];
    numberOfItems--;
    return true;
    }
}
StaticDoubleQueue::Size()
{
return numberOfItems;
}

bool StaticDoubleQueue::isEmpty()
{
    if(numberOfItems==0)
    {
        return true;
    }
    else
    {
        return false;
    }

}
bool StaticDoubleQueue::isFull()
{
    if(numberOfItems==queueSize)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void StaticDoubleQueue::clear()
{
    for(int i=0;i<numberOfItems;++i)
    {
        StaticArray[i]=0;
    }
    numberOfItems=0;

}
StaticDoubleQueue::~StaticDoubleQueue()
{

}
void StaticDoubleQueue::print()
{
    for (int i=0;i<=numberOfItems;++i)
    {
        std::cout << StaticArray[i] << " ";
    }
}
}
