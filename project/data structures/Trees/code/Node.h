#pragma once

template<class T>
struct Node {
	T item;
	Node* parent;
	Node* lchild;
	Node* rchild;

	Node() {
		parent = nullptr;
		lchild = nullptr;
		rchild = nullptr;
	}

	Node(Node* parent, Node* lchild, Node* rchild)
	{
		this->parent = parent;
		this->lchild = lchild;
		this->rchild = rchild;
	}
};
