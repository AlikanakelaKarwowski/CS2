#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    std::list <double> mList;
    // add some values to the list
    mList.push_back(5.5);
    mList.push_back(4.5);
    mList.push_back(6.5);
    mList.push_back(3.5);
    mList.push_back(7.5);
    std::list<double>::iterator b,e,f;
    b = mList.begin();
    e = mList.end();
    double x = 3.5;
    f = std::find(b, e, x);
    if(f == e)
    {
        std::cout <<"Value " << x << " is not found in the list" << std::endl;
    }
    else
    {
        std::cout << "The Found Value is " << *f << std::endl;
    }
    x = 2.5;
    f = std::find(b, e, x);
    if(f == e)
    {
        std::cout <<"Value " << x << " is not found in the list" << std::endl;
    }
    else
    {
        std::cout << "The Found Value is " << *f << std::endl;
    }
    //std::sort(b, e);

    //testing find and sort in vector
    std::vector<double> mVector;
    mVector.push_back(5.5);
    mVector.push_back(4.5);
    mVector.push_back(6.5);
    mVector.push_back(3.5);
    mVector.push_back(7.5);
    x = 4.5;
    std::vector<double>::iterator f2, b2, e2;
    b2 = mVector.begin();
    e2 = mVector.end();
    f2 = std::find(b2, e2, x);
    if (f2 == e2)
    {
        std::cout << "Value " << x << "is not found in the vector" <<std::endl;

    }
    else
    {
        std::cout << "The found value is " << *f2 << std::endl;
    }
    std::sort(b2, e2);
    std::cout << "After the Vector is sorted : ";
    for(b2; b2 != e2; b2++)
    {
        std::cout << *b2 << " ";
    }
    std::cout << std::endl;
}
