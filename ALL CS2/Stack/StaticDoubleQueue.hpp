#ifndef STATICDOUBLEQUEUE
#define STATICDOUBLEQUEUE
namespace cs2
{
    class StaticDoubleQueue
    {
        double *StaticArray;
        int queueSize;
        int Rear;
        int Front;
        int numberOfItems;

    public:
        StaticDoubleQueue(int queueSize);//constructor pass queue size
        virtual ~StaticDoubleQueue();//destructor
        StaticDoubleQueue(const StaticDoubleQueue& r);//copy constructor
        StaticDoubleQueue &operator=(const StaticDoubleQueue& r);//assignment overload
        bool enqueue(double);//insert double into the queue
                            //returns true if inserted
                            //returns false if not
        bool dequeue(double&);//removes a double from the queue
                              //the value is passed back by reference parameter
        void print();//print out the queue
        void clear();//clear the queue
        int Size();//returns the number of items in the queue
        int capacity();//return capacity of the queue
        bool isFull();//tell if full
        bool isEmpty();//tell if empty
    };

}
#endif // STATICDOUBLEQUEUE
