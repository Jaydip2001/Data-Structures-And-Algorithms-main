#include <iostream>
#include "Node.h"


template<class T>
class SinglyLinkedList {
private:

	Node<T>* head;
	int count;

public:

	SinglyLinkedList<T>()
	{
		count = 0;
		head = nullptr;
	}

	void InsertAt(T element, int i);
	void InsertFirst(T element);
	void InsertLast(T element);
	void DeleteAt(int i);
	void DeleteFirst();
	void DeleteLast();	
	void Display();
	bool IsEmpty();
};

template<class T>
void SinglyLinkedList<T>::InsertAt(T element, int i) {

	Node<T>* temp = new Node<T>(nullptr, element);

	if (head == nullptr) {
		head = temp;
	}
	else {

		if (i > count) {
			printf("\nYou can not insert there\n");
			return;
		}
		else if (i == 0) {
			InsertFirst(element);
			return;
		}
		else if (i == count - 1) {
			InsertLast(element);
			return;
		}

		Node<T>* temp1 = head;

		int index = 0;

		while (index < i && temp1->next != nullptr)
		{
			temp1 = temp1->next;
			index++;
		}

		temp->next = temp1->next;

		temp1->next = temp;

	}

	count++;
}

template<class T>
void SinglyLinkedList<T>::InsertFirst(T element) {

	Node<T>* temp = new Node<T>(nullptr, element);

	if (head == nullptr) {
		head = temp;
	}
	else {
		temp->next = head;
		head = temp;
	}
	count++;

}

template<class T>
void SinglyLinkedList<T>::InsertLast(T element) {

	Node<T>* temp = new Node<T>(nullptr, element);

	if (head == nullptr) {
		head = temp;
	}
	else {

		Node<T>* temp1 = head;
		while (temp1->next != nullptr) {
			temp1 = temp1->next;
		}

		temp1->next = temp;
		
	}

	count++;

}

template<class T>
void SinglyLinkedList<T>::DeleteAt(int i) {

	if (count == 0) {
		printf("\nDelete failed");
		printf("\nList is empty");
		return;
	}
	else if (i > count-1) {
		printf("\nDelete failed");
		printf("\nSpecified positione does not contain elements");
		return;
	}
	else if (i == 0) {
		DeleteFirst();
		return;
	}
	else if (i == count - 1) {
		DeleteLast();
		return;
	}

	int index = 0;

	Node<T>* temp = head;

	while (index < i)
	{
		temp = temp->next;
		index++;
	}

	Node<T>* element = temp->next;

	temp->next = element->next;

	delete element;
	element = nullptr;

	count--;
}

template<class T>
void SinglyLinkedList<T>::DeleteFirst() {
	if (count == 0) {
		printf("\nDelete failed");
		printf("\nList is empty");
		return;
	}

	Node<T>* temp = head->next;

	delete head;
	head = nullptr;

	head = temp;

	count--;
}

template<class T>
void SinglyLinkedList<T>::DeleteLast() {

	if (count == 0) {
		printf("\nDelete failed");
		printf("\nList is empty");
		return;
	}
	else if (head->next == nullptr) {
		delete head;
		head = nullptr;
	}
	else {

		Node<T>* temp = head;
		Node<T>* temp1 = nullptr;

		while (temp->next != nullptr) {
			temp1 = temp;
			temp = temp->next;
		}

		delete temp1->next;
		temp1->next = nullptr;
	}

	count--;
}

template<class T>
void SinglyLinkedList<T>::Display() {

	printf("\nLinked list contains :");

	Node<T>* display_node = head;

	while (display_node != nullptr) {

		printf("%d ", display_node->data);
		display_node = display_node->next;
	}
	printf("\n");
}

template<class T>
bool SinglyLinkedList<T>::IsEmpty()
{
	return head == nullptr ? true : false;
}


int main()
{
	const int size = 10;

	SinglyLinkedList<int> list = SinglyLinkedList<int>();

	for (int i = 0; i < size; i++)
	{
		list.InsertAt(i,i);
	}

	list.Display(); // show before new insert

	int mid = size / 2 - 1;
	
	list.InsertAt(99, mid);

	list.InsertFirst(99);

	list.InsertLast(99);

	list.Display(); // show before delete

	list.DeleteAt(mid+1);

	list.DeleteFirst();

	while (!list.IsEmpty()) {
		list.DeleteLast();
		list.Display(); // show after delete
	}

	return 0;
}

