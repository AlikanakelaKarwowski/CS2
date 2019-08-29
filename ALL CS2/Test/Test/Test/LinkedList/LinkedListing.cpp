 #include "LinkedList.hpp"
 #include <iostream>
 namespace CS2
 {
        LinkedList::~LinkedList()
        {
            //destructor
            //free up all dynamically allocated memory
            //to the ist, free up all nodes
            deleteList(head);
            head = nullptr;
        }

        LinkedList::LinkedList(const LinkedList& r)
        {
            //copy constructor
            head = cloneList(r.head);
        }

        LinkedList& LinkedList::operator=(const LinkedList& r)
        {
            //assignment overload
            if(this == &r)
                return *this;
            //clean the list if already having nodes
            deleteList(head);

            //make a copy of list from r, assign to head
            head = cloneList(r.head);

        }


        bool LinkedList::append(double data)
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
            tmp -> data = data;
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
        //if adding operation success, return true
        // otherwise return false

        /*  bool LinkedList::insert (double data)
        //insert the data between a data smaller and a data larger
*/
        bool LinkedList::remove (double data)
        {
            Node *p;
            Node *previousP = nullptr;
            p = head;
            while(p != nullptr)
            {
                if(p->data = data)
                {
                    //do the actual remove operation
                    //first step assign next node prior to p
                    //to be the address of the node after p
                    if(previousP== nullptr)
                    {
                        //delete first node
                        head = p->next;

                    }else
                    {
                        previousP->next = p->next;
                    }
                    //second step
                    delete p;
                    //data is found
                    return true;

                }
                previousP = p;
                p=p->next;
            }
            //remove the data from the list
            return false;
        }
        bool LinkedList::search(double data)
        {
            //return true if data exists in the list
            //return false if not
            Node *p;
            p=head;
            while (p != nullptr)
            {
                if (p-> data == data)
                    return true;
                p=p->next;
            }
            return false;
        }
        void LinkedList::clear()
        {
            deleteList(head);
            head = nullptr;
        }
        //clear all data from the list

        void LinkedList::print()
        {
            //print all data in console
            Node* p;
            p = head;
            while(p != nullptr)
            {
                std::cout << p->data << " ";
                p = p->next;
            }
        }
        void LinkedList::deleteList (Node* start)
        {
            //remove all nodes after the node that starts point to it
            Node* p;
            Node* tmp;
            p = start;
            while(p != nullptr)
            {
                tmp = p;
                p = p->next; //move to next node
                delete tmp;
            }
        }
        LinkedList::Node* LinkedList::cloneList(Node* start)
        {
            Node* p, *firstNode = nullptr, *lastNode = nullptr, *tmp; //hold the address of the first and last node of cloned list
            p = start;
            while(p != nullptr)
            {
                //create a new node and copy thee data from p
                tmp = new Node;
                tmp ->data = p->data;
                tmp ->next = nullptr;

                if(firstNode == nullptr)
                {
                    firstNode = tmp;
                    lastNode = tmp;
                }else
                {
                    lastNode->next = tmp;
                    lastNode = tmp;
                }

                //append new node to the cloned list
                p = p ->next;
            }
            return firstNode;

        }
 }

