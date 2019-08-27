#include <iostream>
#include "StaticDoubleQueue.hpp"
using namespace cs2;

int main()
{
    std::cout<<"Before the clear" <<std::endl;
    double length=4, length2=1;
    double d=5;
    double e=6;
    double f=9;
    double g=10;
    cs2::StaticDoubleQueue a(length);
    cs2::StaticDoubleQueue b(length);
    a.enqueue(length);
    a.enqueue(length+1);
    a.enqueue(length+2);
    a.dequeue(length2);
    b=a;
    std::cout<< "The capacity of the queue is "<< a.capacity()<< std::endl;
    std::cout<< "The queue is " << (a.isFull() ?  "full":"not full")<<std::endl;
    std::cout<< "The queue is " << (a.isEmpty() ? "empty":"not empty")<<std::endl;
    std::cout << "The queue has a size of "<< a.Size()<<std::endl;

    std::cout << "The A queue has ";
    a.print();
    std::cout << " in it";
    std::cout<<std::endl;
    std::cout << "The B queue has ";
    b.print();
    std::cout << " in it";
    std::cout<<std::endl;


    std::cout << "These are the items in the copied queue " ;
    b.print();
    std::cout<<std::endl;
    std::cout<<"After the clear"<<std::endl;
    a.clear();
    b.clear();
    std::cout << "The A queue has a size of "<< a.Size()<<std::endl;
    std::cout << "The A queue has B size of "<< b.Size()<<std::endl;
   std::cout << "The A queue has ";
    a.print();
    std::cout << " in it";
    std::cout<<std::endl;
    std::cout << "The B queue has ";
    b.print();
    std::cout << " in it";
    std::cout<<std::endl;
    b.enqueue(d);
    b.enqueue(e);
    b.enqueue(f);
    b.enqueue(g);
    std::cout << "Adding numbers to b queue"<<std::endl;
    std::cout << "The A queue has ";
    a.print();
    std::cout << " in it";
    std::cout<<std::endl;
    std::cout << "The B queue has ";
    b.print();
    std::cout << " in it";
    std::cout<<std::endl;
    std::cout<< "The A queue is " << (a.isFull() ?  "full":"not full")<<std::endl;
    std::cout<< "The A queue is " << (a.isEmpty() ?  "Empty":"not empty")<<std::endl;
    std::cout<< "The B queue is " << (b.isFull() ?  "full":"not full")<<std::endl;
     std::cout<< "The B queue is " << (b.isEmpty() ?  "Empty":"not empty")<<std::endl;



    return 0;
}
