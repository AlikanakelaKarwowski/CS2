/*
   COPYRIGHT (C) 2017 Student Name (UANET ID ) All rights reserved.
   CS assignment
   Author.  Student Name
            zippy@zips.uakron.edu
   Version. 1.01 09.09.2017
   Purpose: This program ...
*/
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

// prototypes
template <class T>
void printarray(const T[], int);
void chew_system_stack();
int fibrecurse(int n) {
if (n<=1)
return n;
else
    return(fibrecurse(n-1)+fibrecurse(n-2));
}
template<class T>
T partition(T a[],int first,int last)
{
    int start,i,j,temp;
    start=a[first];
    i=first;
    j=last+1;

    do
    {
        do
            i++;

        while(a[i]<start&&i<=last);

        do
            j--;
        while(start<a[j]);

        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);

    a[first]=a[j];
    a[j]=start;

    return(j);
}

template <class T>
void quicksort(T ar[], int first, int last)
{
    int partitionResults;
    if (first<last)
    {
         partitionResults= partition(ar,first,last);
        quicksort(ar,first,partitionResults-1);
        quicksort(ar,partitionResults+1,last);

    }
}

/*
 * Iterative (loop) version of fibonacci
 */
int fibiterate(int n) {
int prev =1, curr =0 ,next =0;
for(int i=0;i<n;++i)
{
    next=curr+prev;
    prev=curr;
    curr =next;
}
return next;
}

/*
 * Recursive quicksort
 */




int main() {
    const int FIBLOOPS = 10;
    const int ARSIZ = 16;
    int ar[ARSIZ];

    std::cout << "Recursive fib: ";
    for(int i = 0; i < FIBLOOPS; ++i)
    {
        std::cout << fibrecurse(i) << " ";
    }
    std::cout << std::endl;
    std::cout << "Iterative fib: ";
    for(int i = 0; i < FIBLOOPS; ++i)
    {
        std::cout << fibiterate(i) << " ";
    }
    std::cout << std::endl;

    std::cout << "Quicksort:" << std::endl;
    // populate random array
    for(int i = 0; i < ARSIZ; ++i)
    {
        ar[i] = (i * 3037) % 2099;  // prime numbers! again!
    }
    printarray(ar, ARSIZ);
    quicksort(ar, 0, ARSIZ-1);
    printarray(ar, ARSIZ);

    //std::cout << "Chewing system stack:" << std::endl;
    //chew_system_stack();

    return 0;
}

/*  utility functions, do not modify  */
template <class T>
void printarray(const T ar[], int s)
{
    for(int i = 0; i < s; ++i)
    {
        std::cout << ar[i] << " ";
    }
    std::cout << std::endl;
}
/*
void printstackpointer()
{
    void * stack_pointer;
    // inline assembly language to get stack pointer
    __asm__ __volatile__("movl  %%esp,%%eax"
                             :"=a"(stack_pointer)
                             );
    std::cout << stack_pointer << std::endl;
}
*/

/*void chew_system_stack()
{
    // Feel free to play with this, but please
    // do NOT enable this for your final commit!
   // printstackpointer();
    //chew_system_stack();
}*
//end utilities
*/
