#include <iostream>
#include "Node.h"

template<class T>
class BTree {
    Node<T>* root;
public:

    BTree();
    void Display();
    void Insert(T element, T key);
    void Remove(T key);
    void Traverse(BTree<T>* tree);
    void Search(BTree<T>* tree,T key);
};

template<class T>
BTree<T>::BTree()
{
    root = nullptr;
}

template<class T>
void BTree<T>::Display()
{

}

template<class T>
void BTree<T>::Insert(T element, T key)
{
    if (root == nullptr) {
        root = new Node<T>(element);
    }
    else {

    }
}

template<class T>
void BTree<T>::Remove(T key)
{
    if (root == nullptr) {
        printf("Tree is empty");
        return;
    }
    else {

    }
}

template<class T>
void BTree<T>::Traverse(BTree<T>* tree)
{
}

template<class T>
void BTree<T>::Search(BTree<T>* tree, T key)
{
}


int main() {

    const int size = 10;

    BTree<int> tree = BTree<int>();

    for (int i = 0; i < size; i++)
    {
        tree.Insert(i);
        tree.Display();
    }

    for (int i = 0; i < size; i++)
    {
        tree.Remove(i);
        tree.Display();
    }

    return 0;
}