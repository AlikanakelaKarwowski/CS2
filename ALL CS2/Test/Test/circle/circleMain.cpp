//Noah Krill
//CS2
//2/26/19

#include <iostream>//including a different library
#include<limits>
#include "circle.hpp"//including a hpp file
template<class R>//declaring a template
R validation(R);//declaring function with the template
using namespace cs2;// using a created namespace

int main()

{
    int length=0,temp=0;//declaring variables
    double length2=0,temp2;
    std::cout << "Please enter a radius for a circle with an integer radius(1, 2, 3, etc...) ";//outputting info to the user
    std::cin >> length ;//getting information from the user;
    temp=validation(length);//calling the validation function check the users input
    length=temp;
    std::cout << "Please enter a radius for a circle with a double radius (ex 1.1, 2.3, 5.3, etc...) ";
    std::cin >> length2;
    temp2=validation(length2);
    length2=temp2;
    Circle<int> A= length;//creating a circle object and setting it equal to the radius
    Circle<double>B=length2;
    std::cout << "The area of the first circle is " <<A  << " feet squared" <<std::endl;//outputting the area back to the user
    std::cout <<"The area of the second circle is "<< B <<" feet squared"<<std::endl;

}
template<class R>//declaring the template again
R validation(R length)//defining the function
{
    while (std::cin.fail()||length<0)//this function will continue to execute until the user enters the correct information
     {
            std::cin.clear();//clearing info
            std::cin.ignore( std::numeric_limits<std::streamsize>::max(),'\n');//ignores numbers that are bigger then the streamsize
            std::cout << "information is invalid please try again " ;//asking user to input info again
            std::cin>>length;//getting information
    }
    return length;//returning it back to main
}

