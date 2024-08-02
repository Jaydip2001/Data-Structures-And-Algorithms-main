#pragma once
#include <iostream>

template<class T>
struct Node {
	Node* next;
	T data;

	Node(T data)
	{
		next = nullptr;
		this->data = data;
	}
};