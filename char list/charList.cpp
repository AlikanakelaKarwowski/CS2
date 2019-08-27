/*
   COPYRIGHT (C) 2016 Student Name (UANET ID ) All rights reserved.
   CSII assignment 5 A
   Author.  Student Name
            zippy@zips.uakron.edu
   Version. 1.01 09.09.2017

*/
// Implementation file for the NumberList class

// Your coding required here


//**************************************************
// displayList shows the value                     *
// stored in each node of the linked list          *
// pointed to by head.                             *
// pre: an empty parameter list                    *
// post: standard output of the linked list        *
//**************************************************
#include <iostream>
#include "charList.hpp"
void CharList::displayList() const
{
   Node *nodePtr;  // To move through the list

   // Position nodePtr at the head of the list.
   nodePtr = head;
   short count = 0;

   // While nodePtr points to a node, traverse
   // the list.
    while (nodePtr)
   {
      // Display the value in this node.
      std::cout << "[" << nodePtr->value << "] -> ";
      ++count;
      // Move to the next node.
      nodePtr = nodePtr->next;
      if (count % 10 == 0) {
        std::cout << std::endl;
        count = 0;
      }
   }
   std::cout << std::endl;
}

/*
bool CharList::appendNode(char a)
{
                Node *p;
                //create new node
                Node * tmp;
                try{
                tmp  = new Node();
                }catch (...)
                {
                    return false;
                }

                tmp->value =a;
                tmp->next = nullptr;
                //find last node
                p=head;
                if(p== nullptr)
                {
                    head =tmp;
                    //this list is empty
                }
                else{
                while (p->next != nullptr)
                {
                    p = p-> next;
                }
                p->next;
                //at the end of the loop p is point to last node
                }
                return true;
            } */
            bool CharList::appendNode(char a)
        {
            Node* p;
            p=head;
            //create new node
            Node* tmp;
            try
            {
                tmp = new Node;
            }catch (...)
            {
                return false;
            }
            tmp ->value =a;
            tmp->next = nullptr;
            //find the last node
            if(p==nullptr)
            {
                head = tmp;
                //the list is empty
            }
            else
            {
                //loop through
                while(p->next != nullptr)
                {
                    p = p->next;
                }
                p->next = tmp;
            }
            return true;
        }

bool CharList::insertNode(char a)
{
    //insert the data smaller and a data larger
    // return true if insertion is successful
    Node *NewNode; //stores the addeess of the node created
    Node *p; //for loop
    
    //create a new node and store thje data in
    try{
        NewNode = new Node();
    }catch(...)
    {
        return false;
    }
    NewNode->value = a;
    NewNode->next = nullptr;
    
    p=head;
    if(p==nullptr)
    {
        //the list is empty, just attach a  new node to head
        head = NewNode;
    }
    else
    {
        //loop through loop to find where to insert
        Node *previousP = nullptr;
        while(p != nullptr)
        {
            if(a >= p->value)
            {
                //the position is found
                //the new node will be inserted between previousP
                break; //quit the loop
            }
            previousP = p;
            p = p->next;
        }
        if (previousP == nullptr)
        {
            //need to insert before the first node of the list
            NewNode->next = p;
            head = NewNode;
        }
        else if(p == nullptr)
        {
            //need to insert after the last node
            previousP->next = NewNode;
        }
        else
        {
            previousP->next = NewNode;
            NewNode->next = p;
        }
    }
    return true;
}



bool CharList::deleteNode(char a)
{
                Node *p;
                Node *previous=nullptr;
                p=head;
                while(p!=nullptr)
                {
                    if(p->value==a)
                    {

                        //first step to assign prior node to node that follows
                        //second step
                        if(previous==nullptr)
                        {
                            head =p->next;//is to deslete fisrt node
                        }
                        else
                        {
                        previous->next=p->next;

                        }
                        delete p;
                        return true;
                    }
                    previous=p;
                    p=p->next;//move to next node
                }


                return false;
            }


//**************************************************
// Destructor                                      *
// This function deletes every node in the list.   *
// pre: n/a                                        *
// post: destroyed object                          *
//**************************************************

CharList::~CharList()
{
   Node *nodePtr;   // To traverse the list
   Node *nextNode;  // To point to the next node

   // Position nodePtr at the head of the list.
   nodePtr = head;

   // While nodePtr is not at the end of the list...
   while (nodePtr != nullptr)
   {
      // Save a pointer to the next node.
      nextNode = nodePtr->next;

      // Delete the current node.
      delete nodePtr;

      // Position nodePtr at the next node.
      nodePtr = nextNode;
   }
}
/*   int CharList::search(char a)
           {
               Node *p;

               p=head;
               for(int counter = 0; p!=nullptr; counter++)
               {
                   if(p->value>=a)
                   {
                           return counter;
                   }
                else
                {
                   p =p->next;
                }

               }
           }
*/
