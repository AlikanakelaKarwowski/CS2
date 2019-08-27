#ifndef LINKEDLIST_H
#define LINKEDLIST_H
//responsibility
//a data structure that can hold the unlimited data
//the size of the data structure can grow and shrink atomatically
//lets sart  with a double
    namespace cs2
    {


    class linkedList
    {
        public:
            linkedList()
            {
                head= nullptr;
            };
            virtual ~linkedList();
            linkedList(const linkedList &r);//copy
            linkedList& operator=(const linkedList &r);//assignment
            bool append(double data);
            //if adding operation success return truw
            //return false otherwise
            bool insert(double data);
            //insert the data between a data smaller and a data larger
            bool remove(double data);
            //remove data from a list
            bool search(double data);
            //return true if data exists in the list
            //false if not
            void clear();
            //clear all data from the list
            void print();
            //print the data in console
        private:
            struct Node
            {
                double data;
                Node* next;
            };
            Node* head;

            void deleteList(Node* start);//remove all node that start pointing to

            Node* cloneList(Node* start);//given a list started from pointer start
            //make a full copy
            //return address of the first of cloned node
    };
    }
#endif // LINKEDLIST_H
