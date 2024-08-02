#include <iostream>

template<class T>
class Node {
	Node* next;
	T data;

	Node(T data)
	{
		this->data = data;
	}
};