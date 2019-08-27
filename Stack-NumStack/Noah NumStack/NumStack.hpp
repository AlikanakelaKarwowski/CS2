#ifndef NUMSTACK_HPP_INCLUDED
#define NUMSTACK_HPP_INCLUDED
template<class t>
class NumStack
{
private:
    int *stackArray;  // Pointer to the stack array
    int stackSize;    // The stack size
    int top;          // Indicates the top of the stack

public:
   // Constructor
   NumStack(int);

   // Copy constructor
   NumStack(const NumStack &);

   // Destructor
   ~NumStack();

   // Stack operations
   void push(t);
   void pop(t &);
   bool isFull() const;
   bool isEmpty() const;
   };

#endif // NUMSTACK_HPP_INCLUDED

