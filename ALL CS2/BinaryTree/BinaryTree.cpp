#include <iostream>
#include "BinaryTree.hpp"


BinaryTree::BinaryTree()
{
    allowDupes = false;
    root = nullptr;
}
BinaryTree::BinaryTree(bool dupes)
{
    this->allowDupes = dupes;
    root = nullptr;
}
BinaryTree::BinaryTree(const BinaryTree &r)
{
    root = nullptr;
    this->allowDupes=r.allowDupes;
    copyTree(r.root);

}
BinaryTree& BinaryTree::operator = (const BinaryTree &r)
{
if(this!=&r)
{
    clear();
    this->allowDupes=r.allowDupes;
    copyTree(r.root);
}
return *this;
}

void BinaryTree::insert (double value)
{
    //create a new tree node
    TreeNode* newNode = new TreeNode(value);

    if(root == nullptr)
    {
        root = newNode;
        return;
    }
    TreeNode *tmpNode =root;
    while(tmpNode != nullptr)
    {
        if(allowDupes == false && tmpNode->value ==value)
        {
            throw "duplicate value is not allowed";
        }
        if(value <= tmpNode->value)
        {
            if(tmpNode->left == nullptr)
            {
                tmpNode->left = newNode;
                return;
            }
            else
            {
                tmpNode = tmpNode->left;
            }
        }
        else
        {
            //goes to right side of the node
            if (tmpNode->right == nullptr)
            {
                tmpNode->right = newNode;
                return;
            }
            else
            {
                tmpNode = tmpNode->right;
            }
        }
    }
}
bool BinaryTree::search (double value)
{
searchTree(root,value);

}
void BinaryTree::remove (double value)
{
    removeTree(root,value);

}
void BinaryTree::print ()
{

}
void BinaryTree::printInOrder()
{
    outputInOrder(root);
}
void BinaryTree::outputInOrder(TreeNode* aNode)
    {
        if(aNode != nullptr)
        {
            outputInOrder(aNode->left);
            std::cout << aNode->value <<" ";
            outputInOrder(aNode->right);
        }

    }
void BinaryTree::printPreOrder()
{
    outputPreOrder(root);
}
void BinaryTree::outputPreOrder(TreeNode* aNode)
    {
        if(aNode != nullptr)
        {
            std::cout << aNode->value <<" ";
            outputInOrder(aNode->left);
            outputInOrder(aNode->right);
        }

    }
void BinaryTree::printPostOrder()
{
    outputPostOrder(root);
}
void BinaryTree::outputPostOrder(TreeNode* aNode)
    {
        if(aNode != nullptr)
        {
            outputInOrder(aNode->left);
            outputInOrder(aNode->right);
            std::cout << aNode->value<<" ";
        }

    }
int BinaryTree::count()
{
    return countOfTree(root);
} //count dracula
int BinaryTree::countOfTree(TreeNode *rootNode)
{
    if(rootNode==nullptr)
    {
        return 0;
    }
    else
    {
        return 1+(countOfTree(rootNode->left)+countOfTree(rootNode->right));
    }
}
int BinaryTree::height()
{
 return heightOfTree(root);
}
int BinaryTree::heightOfTree(TreeNode *rootNode)
{
        if(rootNode==nullptr)
    {
        return -1;
    }
    else
    {
        return 1+std::max(heightOfTree(rootNode->left),heightOfTree(rootNode->right));
    }

}
int BinaryTree::leafCount()
{

}
void BinaryTree::clear()
{
    clearTree(root);
    root=nullptr;
}
void BinaryTree::clearTree(TreeNode* rootNode)
{
    if(rootNode!=nullptr)
    {
    clearTree(rootNode->left);//delete left
    clearTree(rootNode->right);//delete right
    delete rootNode;//delete root
    }


}
void BinaryTree::copyTree(TreeNode* fromTreeRoot)
{
    if(fromTreeRoot!=nullptr)
    {
    insert(fromTreeRoot->value);
    copyTree(fromTreeRoot->left);
    copyTree(fromTreeRoot->right);
    }
}
bool BinaryTree::searchTree(TreeNode *rootNode,int value)
{
    if(rootNode==nullptr)
    {
        return 0;
    }
    else if(rootNode->value==value)
    {
        return 1;
    }
    else
    {
        return(searchTree(rootNode->left,value),searchTree(rootNode->right,value));
    }
}
void BinaryTree::removeTree(TreeNode* rootNode,int value)
{
    TreeNode *tmp;
    if(rootNode==nullptr)
        return ;
    else if(rootNode->value=value)
    {

       /* tmp->left=rootNode->left;
        tmp->right=rootNode->right;
        delete rootNode;
        rootNode->right=tmp->right;
        rootNode->left=tmp->left;
        */
    }
    else(removeTree(rootNode->left,value),removeTree(rootNode->right,value));
}

