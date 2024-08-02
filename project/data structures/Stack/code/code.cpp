#include <iostream>
#include "Node.h"

template<class T>
class Stack {
private:
    Node<T>* top;
public:
    Stack();
    void Push(T element);
    void Pop();
    bool IsEmpty();
    void Display();
};

template<class T>
Stack<T>::Stack()
{
    top = nullptr;
}

template<class T>
void Stack<T>::Push(T element)
{
    Node<T>* node = new Node<T>(element);

    if (IsEmpty()) {
        top = node;
        node->next = nullptr;
    }
    else {
        Node<T>* temp = top;

        while (temp->next!=nullptr)
        {
            temp = temp->next;
        }

        temp->next = node;
    }

}

template<class T>
void Stack<T>::Pop()
{
    if (IsEmpty()) {
        printf("\nThe stack is empty.");
        return;
    }
    else if (top->next == nullptr) {
        delete top;
        top = nullptr;
    }
    else {
        Node<T>* temp = top;
        Node<T>* temp1 = nullptr;

        while (temp->next != nullptr)
        {
            temp1 = temp;
            temp = temp->next;
        }

        delete temp1->next;
        temp1->next = nullptr;
        
    }

}


template<class T>
bool Stack<T>::IsEmpty()
{
    return top == nullptr?true:false;
}

template<class T>
void Stack<T>::Display()
{
    if (IsEmpty()) {
        printf("\nThe stack is empty.");
        return;
    }

    Node<T>* display_node = top;

    printf("\nStack contains elements: ");

    while (display_node->next != nullptr)
    {
        printf("%d ", display_node->data);

        display_node = display_node->next;
    }
}


int main()
{
    const int size = 10;
    Stack<int> stack = Stack<int>();
    for (int i= 0; i < size; i++)
    {
        stack.Push(i);
    }

    stack.Display();

    while (!stack.IsEmpty()) {
        stack.Pop();
        stack.Display();
    }


    return 0;
}