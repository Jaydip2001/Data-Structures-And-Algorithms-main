#pragma once

template<class T>
struct Node {
	Node* next;
	T data;

	Node(T element)
	{
		next = nullptr;
		data = element;
	}
};
