// This program demonstrates the MathStack class.
#include <iostream>
#include "Stack.hpp"

int main()
{
    int catchInteger;   // To hold values popped off the stack
    double catchDouble;
    // Create a MathStack object.

    Stack<int> stackInteger(5);
    Stack<double> stackDouble(5);
    // Push 3 and 6 onto the stack.
    std::cout <<"<===+++ Start of Int Values +++===>";
    std::cout << "\nPushing 3\n";
    stackInteger.push(3);
    std::cout << "Pushing 6\n";
    stackInteger.push(6);

    // Add the two values.
    stackInteger.add();

    // Pop the sum off the stack and display it.
    std::cout << "The sum is ";
    stackInteger.pop(catchInteger);
    std::cout << catchInteger << std::endl << std::endl;

    // Push 7 and 10 onto the stack
    std::cout << "Pushing 7\n";
    stackInteger.push(7);
    std::cout << "Pushing 10\n";
    stackInteger.push(10);

    // Subtract 7 from 10.
    stackInteger.sub();

    // Pop the difference off the stack and display it.
    std::cout << "The difference is ";
    stackInteger.pop(catchInteger);
    std::cout << catchInteger << std::endl;

    //Push 6 and 7
    std::cout << "\nPushing 6\n";
    stackInteger.push(6);
    std::cout << "Pushing 7\n";
    stackInteger.push(7);

    //Multiply the 2 values
    stackInteger.mult();

    //Pop the product off the stack and display it
    std::cout << "The product is ";
    stackInteger.pop(catchInteger);
    std::cout << catchInteger << std::endl;

    //Push 90 (numerator) then 5 (denominator)
    std::cout << "\nPushing 90\n";
    stackInteger.push(90);
    std::cout << "Pushing 5\n";
    stackInteger.push(5);

    //Divide the 2 values in FILO fashion
    stackInteger.div();

    //Pop the quotient off the stack and display it
    std::cout << "The quotient is ";
    stackInteger.pop(catchInteger);
    std::cout << catchInteger << std::endl;

    //Push 3 Values to the stackInteger
    std::cout << "\nPushing 2\n";
    stackInteger.push(2);
    std::cout << "Pushing 4\n";
    stackInteger.push(4);
    std::cout << "Pushing 5\n";
    stackInteger.push(5);
    //Add all values
    stackInteger.addAll();

    //Display the sum of all and pop it off the stack
    std::cout << "The sum of all is ";
    stackInteger.pop(catchInteger);
    std::cout << catchInteger <<std::endl;

    //Push 3 Values to the stack
    std::cout << "\nPushing 5\n";
    stackInteger.push(5);
    std::cout << "Pushing 4\n";
    stackInteger.push(4);
    std::cout << "Pushing 3\n";
    stackInteger.push(3);
    std::cout << "Pushing 2\n";
    stackInteger.push(2);
    //Add all values
    stackInteger.multAll();

    //Display the product of all and pop it off the stack
    std::cout << "The product of all is ";
    stackInteger.pop(catchInteger);
    std::cout << catchInteger <<std::endl;
    
    std::cout <<"<===+++ End of Int Values +++===>\n";
    
//<---------------------------------------------------------------------->//
//<------------------------Break up Sections----------------------------->//
//<---------------------------------------------------------------------->//

    std::cout <<"<===+++ Start of Double Values +++===>";
    
    //Pushing doubles 66.71 and 13.37
    std::cout << "\nPushing 66.71\n";
    stackDouble.push(66.71);
    std::cout << "Pushing 13.37\n";
    stackDouble.push(13.37);

    // Add the two values.
    stackDouble.add();

    // Pop the sum off the stack and display it.
    std::cout << "The sum is ";
    stackDouble.pop(catchDouble);
    std::cout << catchDouble << std::endl;

    // Push 490.11 and 69.420 onto the stack
    std::cout << "\nPushing 69.420\n";
    stackDouble.push(69.420);
    std::cout << "Pushing 490.11\n";
    stackDouble.push(490.11);
    

    // Subtract two values.
    stackDouble.sub();

    // Pop the difference off the stack and display it.
    std::cout << "The difference is ";
    stackDouble.pop(catchDouble);
    std::cout << catchDouble << " ... Nice!" << std::endl;

    //Push 1.234 and 5.6789
    std::cout << "\nPushing 1.234\n";
    stackDouble.push(1.234);
    std::cout << "Pushing 5.6789\n";
    stackDouble.push(5.6789);

    //Multiply the 2 values
    stackDouble.mult();

    //Pop the product off the stack and display it
    std::cout << "The product is ";
    stackDouble.pop(catchDouble);
    std::cout << catchDouble << std::endl;

    //Push 90 (numerator) then 7.1 (denominator)
    std::cout << "\nPushing 90\n";
    stackDouble.push(90);
    std::cout << "Pushing 7.1\n";
    stackDouble.push(7.1);

    //Divide the 2 values in FILO fashion
    stackDouble.div();

    //Pop the quotient off the stack and display it
    std::cout << "The quotient is ";
    stackDouble.pop(catchDouble);
    std::cout << catchDouble << std::endl;

    //Push 3 Values to the stackDouble
    std::cout << "\nPushing 80.085\n";
    stackDouble.push(80.085);
    std::cout << "Pushing 42.0\n";
    stackDouble.push(42.0);
    std::cout << "Pushing 69.69\n";
    stackDouble.push(69.69);
    //Add all values
    //Yes im immature but it makes you smile done lie
    stackDouble.addAll();

    //Display the sum of all and pop it off the stack
    std::cout << "The sum of all is ";
    stackDouble.pop(catchDouble);
    std::cout << catchDouble <<std::endl;

    //Push 4 Values to the stack
    std::cout << "\nPushing 8.0085\n";
    stackDouble.push(8.0085);
    std::cout << "Pushing 6.969\n";
    stackDouble.push(6.969);
    std::cout << "Pushing 13.37\n";
    stackDouble.push(13.37);
    std::cout << "Pushing 4.20\n";
    stackDouble.push(4.20);
    //Add all values
    stackDouble.multAll();

    //Display the product of all and pop it off the stack
    std::cout << "The product of all is ";
    stackDouble.pop(catchDouble);
    std::cout << catchDouble <<std::endl;
    return 80085;
    
}
