#ifndef CHARLIST.HPP
#define CHARLIST.HPP
class CharList
{
    private:
            struct Node
            {
                char value;
                Node* next;
            };
            Node* head;

    public:
    CharList()
    {
        head=nullptr;
    }

    virtual ~CharList();
    void displayList() const;
    bool appendNode(char a);
    bool insertNode(char a);
    bool deleteNode(char a);
};

#endif // CHARLIST
