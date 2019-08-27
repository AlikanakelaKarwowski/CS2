/*
\Binary search tree: a data structure storing the data with tree structures with values
in left subtree are always smaller than the value in the node in the right subtree

Functionalities
1.  Insert a value X
2.  search a value X
3.  remove a value X
4.  assignment overloading X
5.  print X
6.  count of total nodes X
7.  height of tree
8.  number of leaf nodes.
9.  copy constructors
10. dp we want it to store the duplicated values?
11. clear the tree for reuse
*/
#ifndef BINARYTREE_HPP_INCLUDED
#define BINARYTREE_HPP_INCLUDED

class BinaryTree
{
public:
    BinaryTree();
    BinaryTree(bool allowDupes);
    BinaryTree(const BinaryTree &r);
    BinaryTree& operator = (const BinaryTree &r);

    void insert (double value);
    void remove (double value);
     bool search (double value);

    void print ();
    void printInOrder();
    void printPreOrder();
    void printPostOrder();
    int count(); //count dracula
    int height();
    int leafCount();
    void clear();

    bool dupes() //allow dupes? yes/no
    {
        return allowDupes;
    }
//virtual ~BinaryTree();

private:
    class TreeNode
    {
    public:
        double value;
        TreeNode *left;
        TreeNode *right;
        TreeNode(double value)
        {
            this->value = value;
            left = nullptr;
            right = nullptr;
        }
    };
    bool allowDupes;
    TreeNode *root;
    void outputInOrder(TreeNode* aNode);
    void outputPreOrder(TreeNode* aNode);
    void outputPostOrder(TreeNode* aNode);
    void clearTree(TreeNode* root);
    void copyTree(TreeNode* r);
    int heightOfTree(TreeNode *rootNode);
    int countOfTree(TreeNode *rootNode);
     bool searchTree (TreeNode *rootNode, int value);
     void removeTree(TreeNode *rootNode,int value);
};


#endif // BINARYTREE_HPP_INCLUDED
