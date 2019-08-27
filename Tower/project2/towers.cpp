#include <iostream>
#include "towers.h"
#include "mystack.h"

using namespace std;
//YOUR CODE
//......
Towers::Towers(int x)
{
    Towers::plotPegs();

}


//display disks on the three pegs in the console window (stdout)
//DO NOT MODIFY THIS FUNCTION
void Towers::plotPegs()
{
  	if (peg1==NULL || peg2==NULL || peg3==NULL) return;

	int n1=peg1->size();
	int n2=peg2->size();
	int n3=peg3->size();
	int numDisk = n1+n2+n3;


	MyStack<int> tmp1(*peg1);
	MyStack<int> tmp2(*peg2);
	MyStack<int> tmp3(*peg3);

	//plot

	for (int i=0; i<numDisk; i++) {
		//peg1
		if (numDisk-n1-i>0) {
			for (int j=0; j<numDisk; j++)
				cout << " ";
		}
		else {
			int m1 = tmp1.top();
			tmp1.pop();
			for (int j=0; j<m1; j++)
				cout << "*";
			for (int j=m1; j<numDisk; j++)
				cout << " ";
		}
		cout <<" | ";

		//peg2
		if (numDisk-n2-i>0) {
			for (int j=0; j<numDisk; j++)
				cout << " ";
		}
		else {
			int m2 = tmp2.top();
			tmp2.pop();
			for (int j=0; j<m2; j++)
				cout << "*";
			for (int j=m2; j<numDisk; j++)
				cout << " ";
		}
		cout <<" | ";

		//peg3
		if (numDisk-n3-i>0) {
			for (int j=0; j<numDisk; j++)
				cout << " ";
		}
		else {
			int m3 = tmp3.top();
			tmp3.pop();
			for (int j=0; j<m3; j++)
				cout << "*";
			for (int j=m3; j<numDisk; j++)
				cout << " ";
		}
		cout<<endl;
	}
	cout << "_________________________________________\n";
}
void Towers::move(int x,MyStack<int>*y,MyStack<int>*z,MyStack<int>*a)
{
    if (x>0)
    {
        Towers::move(x-1,y,z,a);
        cout << "Move a disc from peg "<<y
        <<" to peg "<<z<<endl;
        Towers::move(x-1,y,z,a);
    }

}
template<class T>
MyStack<T>::size() const
{
     int num=0;
    cout<<"Enter the number of disks : ";
    cin>>num;
    return num;
}
template<class T>
T MyStack<T>::top()
{
 int top1 =4;
 return 4;
}
template<class T>
T MyStack<T>::pop()
{

}
Towers::~Towers()
{

}
template<class T>
MyStack<T>::MyStack(MyStack<T> const&)
{

}
template<class T>
MyStack<T>::~MyStack()
{

}
