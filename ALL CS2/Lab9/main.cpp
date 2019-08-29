// Noah Krill
// University of Akron

#include <iostream>
#include <string>
#include <stdexcept> // Needed for std exceptions
#include <cstdlib>   // Needed for strtod
#include <cerrno>    // Needed for errno

// TODO: Modify this to throw exceptions.
double
read_value()
{
    std::string s;
    std::cin >> s;

    // Convert to double.
    char* p;
    double ret = std::strtod(s.data(), &p);

    // No conversion could be performed.
    if (p == s.data())
        throw -1;

    // The input value is out of range.
    if (errno == ERANGE)
        throw -1;

    return ret;
}




// TODO: Modify this to throw exceptions on invalid arguments.
double
divide(double a, double b)
{
    //cant divide by zero
    if (b==0)
        throw -2;
    else
        return a / b;
}


int
main()
{
    // TODO: Catch exceptions, diagnose errors, and exit gracefully.
    try //try to do these functions
    {
        double first = read_value();
        double second = read_value();
        double ret = divide(first, second);
        std::cout << ret << '\n';
    }
    catch (int x)//if an error is thrown then it will output
    {
        if (x==-2)//if the error code is -2 it tried to divide by zero
        std::cerr << "Cannot divide by zero\n";//outputs the error message
        else
        std::cerr << "unexpected error\n";
    }
}
