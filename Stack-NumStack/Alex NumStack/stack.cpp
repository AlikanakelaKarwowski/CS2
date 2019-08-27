
#include "stack.hpp"

//***********************************************
// Member function add. add pops                *
// the first two values off the stack and       *
// adds them. The sum is pushed onto the stack. *
// pre: no parameters                           *
// post: return the  new stack entry of sum     *
//***********************************************
template<class T>
void Stack<T>::add()
{
    T num, sum;

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
template<class T>
void Stack<T>::sub()
{
    T num, diff;

    // Pop the first two values off the stack.
    pop(diff);
    pop(num);

    // Subtract num from diff.
    diff -= num;

    // Push diff back onto the stack.
    push(diff);
}
template<class T>
void Stack<T>::mult()
{
    T num, prod;
    // Pop the first two values off the stack.
    pop(prod);
    pop(num);

    // Multiply the two values, store in prod.
    prod *= num;

    // Push prod back onto the stack.
    push(prod);
}
template<class T>
void Stack<T>::div()
{

    T num, den, quotient;

    // Pop the first two values off the stack.
    pop(den);
    pop(num);
    // Divide the 2 values and store into the quotient.
    quotient = num/den;

    // Push quotient back onto the stack.
    push(quotient);
}
template<class T>
void Stack<T>::addAll()
{
    T num, sum, totalSum;
    sum = 0;
    bool emptyStack;
    emptyStack = NumStack<T>::isEmpty();
    while(!emptyStack)
       {
            pop(num);
            sum += num;
            emptyStack = NumStack<T>::isEmpty();

       }
       totalSum = sum;

    // Push sum back onto the stack.
    push(totalSum);
}
template<class T>
void Stack<T>::multAll()
{
    T num = 0, prod = 0, totalProd = 0;
    bool emptyStack;
    emptyStack = NumStack<T>::isEmpty();
    pop(prod);
    while(!emptyStack)
       {
            pop(num);
            prod *= num;
            emptyStack = NumStack<T>::isEmpty();

       }
       totalProd = prod;

    // Push Prod back onto the stack.
    push(totalProd);
}
