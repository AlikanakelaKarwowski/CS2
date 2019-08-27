#include <iostream>
#include "linkedList.hpp"
using namespace std;
using namespace cs2;

int main()
{
    cs2::linkedList myList;
    myList.append (2.2);
    myList.append (4.4);
    myList.append (3.2);
    myList.print();

//    myList.append ();
    return 0;
}
