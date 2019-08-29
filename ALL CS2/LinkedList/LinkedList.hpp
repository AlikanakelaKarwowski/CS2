#ifndef LINKEDLIST_HPP_INCLUDED
#define LINKEDLIST_HPP_INCLUDED
/*Responsibilities:
    a data structure that can hold the unlimited data
    the size of the data structure can grow and shtink dynamically
    as needed
*/

//lets start with a structure hilding double type of data
namespace CS2
{
    class LinkedList
    {
        public:
            LinkedList()
            {
                head = nullptr;
            };
            virtual ~LinkedList();
            LinkedList(const LinkedList& r);
            //copy constructor
            LinkedList& operator=(const LinkedList& r);
            //assignment overload

            bool append(double data);
            //if adding operation success, return true
            // otherwise return false

            bool insert (double data);
            //insert the data between a data smaller and a data larger

            bool remove (double data);
            //remove the data from the list

            bool search(double data);
            //return true if data exists in the list
            //return false if not

            void clear();
            //clear all data from the list

            void print();
            //print all data in console
        private:
            struct Node
            {
                double data;
                Node* next;
            };
            Node* head;
            void deleteList(Node* start);
                //remove all nodes after the node that it starts pointing to
            Node* cloneList(Node* start);
                //given a list started from pointer start
                //make a full copy of the list
                //return the address of the first node of cloned list

    };
}
#endif // LINKEDLIST_HPP_INCLUDED
