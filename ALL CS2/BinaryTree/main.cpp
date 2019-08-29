#include <iostream>
#include "BinaryTree.hpp"
using namespace std;

int main()
{
    BinaryTree lists(false);
    lists.insert(10);
    lists.insert(8);
    lists.insert(7);
    lists.insert(9);
    lists.insert(8.5);
    lists.insert(27);
    lists.insert(15);
    lists.insert(20);
    lists.printInOrder();
    std::cout << std::endl;
    lists.printPreOrder();
    std::cout << std::endl;
    lists.printPostOrder();
    std::cout << std::endl;
    BinaryTree myTree=lists;
     myTree.printInOrder();
    std::cout << std::endl;
    myTree.printPreOrder();
    std::cout << std::endl;
    myTree.printPostOrder();
    std::cout << std::endl;
    std::cout <<myTree.height() ;
    std::cout << std::endl;
    std::cout << myTree.count();
    std::cout <<std::endl;
    std::cout << myTree.search(10);
     std::cout <<std::endl;
    std::cout << myTree.search(333333);
   // myTree.remove(10);



   /* lists.clear();
     lists.printInOrder();
    std::cout << std::endl;
    lists.printPostOrder();
    std::cout << std::endl;
    lists.printPreOrder();
    std::cout << std::endl;
    */

    return 0;
}
