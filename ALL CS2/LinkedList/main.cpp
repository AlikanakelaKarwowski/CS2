#include <iostream>
#include "LinkedList.hpp"

using namespace std;

int main()
{
    CS2::LinkedList mylist;
    mylist.append(2.2);
    mylist.append(4.4);
    mylist.append(3.2);

    mylist.print();
    cout << endl;
    mylist.remove(2.2);
    mylist.print();
    return 0;
}
