#include <iostream>
#include "Node.h"

template<class T>
class Queue {
private:
	Node<T>* start;
	Node<T>* end;
public:
	Queue();
	void Enqueu(T data);
	void Dequeu();
	bool IsEmpty();
	void Display();
};


template<class T>
Queue<T>::Queue()
{
	start = nullptr;
	end = nullptr;
}

template<class T>
void Queue<T>::Enqueu(T data)
{
	Node<T>* node = new Node<T>(data);

	if (IsEmpty()) {
		start = node;
		end = node;
	}
	else {
		end->next = node;
		end = node;
	}
}

template<class T>
void Queue<T>::Dequeu()
{
	if (IsEmpty()) {
		printf("\nQueue is already empty.\n");
	}
	else {
		Node<T>* temp = start;
		start = start->next;

		delete temp;
		temp = nullptr;
	}
}

template<class T>
bool Queue<T>::IsEmpty()
{
	return start == nullptr ? true : false;
}

template<class T>
void Queue<T>::Display()
{
	if (IsEmpty())
		return;
	Node<T>* current = start;

	printf("\nQueue contains elements : ");

	while (current != nullptr)
	{
		printf("%d ", current->data);
		current = current->next;
	}
}

int main()
{
	const int size = 10;
	Queue<int> queue = Queue<int>();

	for (int i = 0; i < size; i++)
	{
		queue.Enqueu(i);
		queue.Display();
	}

	while (!queue.IsEmpty()) {
		queue.Dequeu();
		queue.Display();
	}

	return 1;
}