#include <iostream>
#include "algo.hpp"
using namespace std;
//noob
int main()
{
    algo ALG1;
    int arr1[] = {1,2,2,4,5,7,7,7,9};
    int *f = arr1;
    int *l = f + 9;
    int arr2[] = {1,2,2,4,5,11,11,11,11};
    int *f2 = arr2;
    int *l2 = f2 + 9;
    int arr3[] = {1,2,2,4,5};
    int *f3 = arr3;
    int *l3 = f3 + 5;
    std::cout << "======Print Array Test Cases======\n";
    std::cout << "\nArr1: ";
    ALG1.print(f,l);
    std::cout << "\nArr2: ";
    ALG1.print(f2,l2);
    std::cout << "\nArr3: ";
    ALG1.print(f3,l3);
    std::cout << "\n\n======Determining if Elements are Found======\n";
    std::cout << "\nFinding 2 in Arr1: " << ALG1.find(f,l,2);
    std::cout << "\n1 if found, 0 if not: " << ALG1.in(f,l,2);
    std::cout << "\nFinding 10 in Arr2: " << ALG1.find(f2,l2,10);
    std::cout << "\n1 if found, 0 if not: " << ALG1.in(f2,l2,10);
    std::cout << "\nFinding 4 in Arr3: " << ALG1.find(f3,l3,4);
    std::cout << "\n1 if found, 0 if not: " << ALG1.in(f3,l3,4);
    std::cout << "\n\n======Searching for Number of X Elements Arrays Contain======\n";
    std::cout << "\nNumber of instances of the number 2 (arr1): " << ALG1.count(f,l,2);
    std::cout << "\nNumber of instances of the number 11 (arr2): " << ALG1.count(f2,l2,11);
    std::cout << "\nNumber of instances of the number 7 (arr3): " << ALG1.count(f3,l3,7);
    std::cout << "\n\n======Testing if Array's are Equivalent======\n";
    std::cout << "\nArr1 == Arr1: " << ALG1.equal(f,l,f,l);
    std::cout << "\nArr1 == Arr2: " << ALG1.equal(f,l,f2,l2);
    std::cout << "\nArr1 == Arr3: " << ALG1.equal(f,l,f3,l3);
    std::cout << "\nArr2 == Arr1: " << ALG1.equal(f2,l2,f,l);
    std::cout << "\nArr2 == Arr2: " << ALG1.equal(f2,l2,f2,l2);
    std::cout << "\nArr2 == Arr3: " << ALG1.equal(f2,l2,f3,l3);
    std::cout << "\nArr3 == Arr1: " << ALG1.equal(f3,l3,f,l);
    std::cout << "\nArr3 == Arr2: " << ALG1.equal(f3,l3,f2,l2);
    std::cout << "\nArr3 == Arr3: " << ALG1.equal(f3,l3,f3,l3);
    std::cout << "\n\n======Finding Minimum Numbers and Elements======\n";
    std::cout << "\nMinimum of 3 and 11: " << ALG1.minimum(3,11);
    int* search1 = ALG1.minimumPtr(f,l);
    std::cout << "\nMinimum of Arr1 pointer: "<< ALG1.minimumPtr(f,l) << " , " << *search1;
    std::cout << "\n\n======Finding Maximum Numbers and Elements======\n";
    std::cout << "\nMaximum of 3 and 11: " << ALG1.maximum(3,11);
    search1 = ALG1.maximumPtr(f,l);
    std::cout << "\nMaximum of Arr1 pointer: "<< ALG1.maximumPtr(f,l) << " , " << *search1;
    std::cout << "\n\n======Comparing Lexicography======";
    std::cout << "\n======-1 if Less, 0 if Equal, 1 if Converse======\n";
    std::cout << "\nArr1 compares to Arr1: " << ALG1.compare(f,l,f,l);
    std::cout << "\nArr1 compares to Arr2: " << ALG1.compare(f,l,f2,l2);
    std::cout << "\nArr1 compares to Arr3: " << ALG1.compare(f,l,f3,l3);
    std::cout << "\nArr2 compares to Arr1: " << ALG1.compare(f2,l2,f,l);
    std::cout << "\nArr2 compares to Arr2: " << ALG1.compare(f2,l2,f2,l2);
    std::cout << "\nArr2 compares to Arr3: " << ALG1.compare(f2,l2,f3,l3);
    std::cout << "\nArr3 compares to Arr1: " << ALG1.compare(f3,l3,f,l);
    std::cout << "\nArr3 compares to Arr2: " << ALG1.compare(f3,l3,f2,l2);
    std::cout << "\nArr3 compares to Arr3: " << ALG1.compare(f3,l3,f3,l3);
    std::cout << "\n\n======Set Arrays Equal to Each Other======\n";
    std::cout << "\nArr1 set equal to Arr2: ";
    ALG1.copy(f,l,f2,l2);
    std::cout << "Arr2 set equal to Arr3: ";
    ALG1.copy(f2,l2,f3,l3);
    std::cout << "Arr3 set equal to Arr1: ";
    ALG1.copy(f3,l3,f,l);
    std::cout << "Arr1: ";
    ALG1.print(f,l);
    std::cout << "\nArr2: ";
    ALG1.print(f2,l2);
    std::cout << "\nArr3: ";
    ALG1.print(f3,l3);
    std::cout << "\n\n======After Being Set Equal, Test if They are Equal======\n";
    std::cout << "\nArr1 == Arr1: " << ALG1.equal(f,l,f,l);
    std::cout << "\nArr1 == Arr2: " << ALG1.equal(f,l,f2,l2);
    std::cout << "\nArr1 == Arr3: " << ALG1.equal(f,l,f3,l3);    
    std::cout << "\n\n======Alex Is Cooler Than Noah======\n\n";
    std::cout << "Process returned Boobs (0x138D5)   execution time : 0.114 s";
    //test
    return 80085;
}
 
