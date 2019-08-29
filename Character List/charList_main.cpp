// Alex Karwowski akk42
// This program demonstrates simple operations
// on a linked list.
#include <iostream>
#include "charList.hpp"

int main()
{
   // Define a NumberList object.
   CharList list;

   // Append some values to the list.
   list.appendNode('t');
   list.appendNode('s');
   list.appendNode('n');
   list.appendNode('m');
   list.appendNode('j');
   list.appendNode('f');
   list.appendNode('c');
   list.appendNode('a');
   //Display the linked list to make sure it performed properly
   list.displayList();
   std::cout << std::endl;
   //Insert some values in order from "largest" to "smallest"
   list.insertNode('y');
   list.insertNode('0');
   list.insertNode('9');
   list.insertNode('o');
   list.insertNode('p');
   list.insertNode('@');
   list.insertNode('Q');
   //display the list  again to make sure insertion worked correctly
   list.displayList();
   //delete the value "t" and print out the new list
   list.deleteNode('t');
   std::cout<<  std::endl;
   list.displayList();
   

   return 0;
}
