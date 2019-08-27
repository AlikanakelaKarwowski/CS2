#ifndef STACK_HPP
#define STACK_HPP
#include "NumStack.hpp"
template <class t>
 class Stack :public  NumStack<t>
{

public:
   // Constructor
   Stack(int s) : NumStack<t>(s) {}

   // MathStack operations
   void add();
   void sub();
   void mult();
   void div();
   void addAll();
   void multAll();
};

#endif // STACK_HPP_INCLUDED
