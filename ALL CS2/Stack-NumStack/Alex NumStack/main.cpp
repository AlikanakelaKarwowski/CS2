// This program demonstrates the MathStack class.
#include <iostream>
#include "Stack.hpp"

int main()
{
     int catchVar;   // To hold values popped off the stack

    // Create a MathStack object.
    
    Stack stack(5);

    // Push 3 and 6 onto the stack.
    std::cout << "Pushing 3\n";
    stack.push(3);
    std::cout << "Pushing 6\n";
    stack.push(6);

    // Add the two values.
    stack.add();

    // Pop the sum off the stack and display it.
    std::cout << "The sum is ";
    stack.pop(catchVar);
    std::cout << catchVar << std::endl << std::endl;

    // Push 7 and 10 onto the stack
    std::cout << "Pushing 7\n";
    stack.push(7);
    std::cout << "Pushing 10\n";
    stack.push(10);

    // Subtract 7 from 10.
    stack.sub();

    // Pop the difference off the stack and display it.
    std::cout << "The difference is ";
    stack.pop(catchVar);
    std::cout << catchVar << std::endl;

    //Push 6 and 7
    std::cout << "\nPushing 6\n";
    stack.push(6);
    std::cout << "Pushing 7\n";
    stack.push(7);
    
    //Multiply the 2 values
    stack.mult();
    
    //Pop the product off the stack and display it
    std::cout << "The product is ";
    stack.pop(catchVar);
    std::cout << catchVar << std::endl;
    
    //Push 90 (numerator) then 5 (denominator)
    std::cout << "\nPushing 90\n";
    stack.push(90);
    std::cout << "Pushing 5\n";
    stack.push(5);
    
    //Divide the 2 values in FILO fashion
    stack.div();
    
    //Pop the quotient off the stack and display it
    std::cout << "The quotient is ";
    stack.pop(catchVar);
    std::cout << catchVar << std::endl;
    
    //Push 3 Values to the stack
    std::cout << "\nPushing 2\n";
    stack.push(2);
    std::cout << "Pushing 4\n";
    stack.push(4);
    std::cout << "Pushing 5\n";
    stack.push(5);
    //Add all values
    stack.addAll();
    
    //Display the sum of all and pop it off the stack
    std::cout << "The sum of all is ";
    stack.pop(catchVar);
    std::cout << catchVar <<std::endl;
    
    //Push 3 Values to the stack
    std::cout << "\nPushing 5\n";
    stack.push(5);
    std::cout << "Pushing 4\n";
    stack.push(4);
    std::cout << "Pushing 3\n";
    stack.push(3);
    std::cout << "Pushing 2\n";
    stack.push(2);
    //Add all values
    stack.multAll();
    
    //Display the product of all and pop it off the stack
    std::cout << "The product of all is ";
    stack.pop(catchVar);
    std::cout << catchVar <<std::endl;


    return 0;
}
