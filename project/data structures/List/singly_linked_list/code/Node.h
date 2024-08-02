#pragma once

template<class T>
struct Node {
	Node* next;
	T data;

	Node() {

	}

	Node(Node*next,T data):data(data)
	{
		this->next = next;
	}
};
