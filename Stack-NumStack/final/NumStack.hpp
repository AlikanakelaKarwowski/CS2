#ifndef NUMSTACK_HPP_INCLUDED
#define NUMSTACK_HPP_INCLUDED

template<class T>
class NumStack
{
private:
   T *stackArray;  // Pointer to the stack array
   int stackSize;    // The stack size
   int top;          // Indicates the top of the stack

public:
   // Constructor
   NumStack<T>(int);

   // Copy constructor
   NumStack<T>(const NumStack<T> &);

   // Destructor
   ~NumStack();

   // Stack operations
   void push(T);
   void pop(T &);
   bool isFull() const;
   bool isEmpty() const;
   
};

#endif // NUMSTACK_HPP_INCLUDED
