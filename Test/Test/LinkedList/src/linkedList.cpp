/*#include "linkedList.hpp"
#include<iostream>
namespace cs2{


linkedList::~linkedList()
    {
        //free up memory, free up all nodes
        deleteList(head);
        head=nullptr;
    }

            linkedList::linkedList(const linkedList &r)
            {
                head=cloneList(r.head);
            }//copy
            linkedList& linkedList::operator=(const linkedList &r)
            {
                //clean the list if already having nodes
                if(this==&r)
                {
                    return *this;
                }
                deleteList(head);

                //then make a copy of the list from r and assign to head
                head = cloneList(r.head);

            }//assignment
            bool linkedList::append(double data)
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

                tmp->data =data;
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
                return true;
            }
            }


            //bool linkedList::insert(double data);
            //{

            //}
            //insert the data between a data smaller and a data larger
            bool linkedList::remove(double data)
            {
                Node *p;
                Node *previous=nullptr;
                p=head;
                while(p!=nullptr)
                {
                    if(p->data==data)
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
            //remove data from a list
           bool linkedList::search(double data)
           {
               Node *p;
               p=head;
               while(p!=nullptr)
               {
                   if(p->data==data)
                    return true;
                   p =p->next;
               }
               return false;
           }
            //return true if data exists in the list
            //false if not
            //void linkedList::clear();
            //clear all data from the list
            void linkedList::print()
            {
                Node *p;
                p=head;
                while (p!=nullptr)
                {
                    std::cout<< p->data << " ";
                    p=p->next;
                }
            }
            void linkedList::deleteList(Node* start)
            {
                Node *p;
                Node *tmp;
                p=start;
                while (p!= nullptr)
                {
                    tmp=p;
                    p=p->next;
                    delete tmp;

                }
            }
            linkedList::Node *linkedList::cloneList(Node* start)
            {
                Node *p;
                Node *firstNode=nullptr;
                Node *secondNode=nullptr;//holds the address of the first node of cloned list and te second holds the address
                //of the last node
                Node *temp;
                p=start;
                while (p!= nullptr)
                {
                    //creat new node and copy the data from p
                    temp=new Node;
                    temp->data=p->data;
                    temp->next=nullptr;
                    //append new node to the cloned list
                    if(firstNode==nullptr)
                    {
                        firstNode=temp;
                        secondNode=temp;
                    }
                    else
                    {
                        secondNode->next=temp;
                        secondNode=temp;
                    }

                    p=p->next;
                }
                return firstNode;
            }
            void linkedList::clear()
            {
                deleteList(head);
                head=nullptr;
            }
            }

            //print the data in console
//private member functions
*/
