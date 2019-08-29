/*
   COPYRIGHT (C) 2017 Student Name (UANET ID ) All rights reserved.
   CSII assignment
   Author.  Student Name
            zippy@zips.uakron.edu
   Version. 1.01 09.09.2017
   Purpose: This program ...
*/
#include "stack.hpp"

//***********************************************
// Member function add. add pops                *
// the first two values off the stack and       *
// adds them. The sum is pushed onto the stack. *
// pre: no parameters                           *
// post: return the  new stack entry of sum     *
//***********************************************
template<class t>
void Stack<t>::add()
{
   t num, sum;

   // Pop the first two values off the stack.
   pop(sum);
   pop(num);

   // Add the two values, store in sum.
   sum += num;

   // Push sum back onto the stack.
   push(sum);
}

//***********************************************
// Member function sub. sub pops the            *
// first two values off the stack. The          *
// second value is subtracted from the          *
// first value. The difference is pushed        *
// onto the stack.                              *
// pre: no parameters                           *
// post: return the  new stack entry of diff    *
//***********************************************
template <class t>
void Stack<t>::sub()
{
   t num, diff;

   // Pop the first two values off the stack.
   pop(diff);
   pop(num);

   // Subtract num from diff.
   diff -= num;

   // Push diff back onto the stack.
   push(diff);
}
template <class t>
void Stack<t>::mult()
{
    t num, num2, prod;
    pop(num);
    pop(num2);
    prod=num*num2;
    push(prod);
}
template <class t>
void Stack<t>::div()
{
    t num, num2, quo;
    pop(num);
    pop(num2);
    quo=num2/num;
    push(quo);
}
template <class t>
void  Stack<t>::addAll()
{
    t total=0, num=0,sum=0;
    bool Empty;
    Empty=NumStack<t>::isEmpty();
    while (!Empty)
    {

        pop(num);
        sum+=num;
        Empty=NumStack<t>::isEmpty();
    }

    total=sum;
    push(total);


}
template <class t>
void Stack<t>::multAll()
{
    t product=0, num=0, total=0;
    bool Empty;
    Empty=NumStack<t>::isEmpty();
    pop(product);
    while (!Empty)
    {

        pop(num);
        product*=num;
        Empty=NumStack<t>::isEmpty();

    }
    total=product;
    push(total);
}
