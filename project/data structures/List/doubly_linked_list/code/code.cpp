#include <iostream>
#include "Node.h"

template<class T>
class DoublyLinkedList {
private:
    Node* head;
    int count;
public:
    DoublyLinkedList();
    void InsertAt(T elemenet, int i);
    void InsertFirst(T elemenet);
    void InsertLast(T element);
    void DeleteAt(int i);
    void DeleteFirst();
    void DeleteLast();
    void Display();
};

template<class T>
DoublyLinkedList<T>::DoublyLinkedList() {
    count = 0;
    head = nullptr;
}

template<class T>
void DoublyLinkedList<T>::InsertAt(T elemenet, int i)
{
}

template<class T>
void DoublyLinkedList<T>::InsertFirst(T elemenet)
{
}

template<class T>
void DoublyLinkedList<T>::InsertLast(T element)
{
}

template<class T>
void DoublyLinkedList<T>::DeleteAt(int i)
{
}

template<class T>
void DoublyLinkedList<T>::DeleteFirst()
{
}

template<class T>
void DoublyLinkedList<T>::DeleteLast()
{
}

template<class T>
void DoublyLinkedList<T>::Display()
{
}

int main()
{
    const int size = 10;

    DoublyLinkedList<int> list = DoublyLinkedList<int>();

    for (int i = 0; i < size; i++)
    {
        list.InsertAt(i, i);
    }

    list.Display();

    return 0;
}

