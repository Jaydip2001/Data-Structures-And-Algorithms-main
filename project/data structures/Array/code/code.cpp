#include<iostream>

template<class T>

class Array {

private:
	T a[50];
	int n, size;

public:
	Array(int n)
	{
		this->n = n;
		size = 0;
	}

	void InsertLast(T element);
	void InsertFirst(T element);
	void InsertAt(T element,int i);
	void DeleteAt(int i);
	void DeleteLast();
	void DeleteFirst();
	void Display();

};

template<class T>
void Array<T>::InsertLast(T element) {

	if (size >= n)
	{
		printf("The array is full.");
		return;
	}

	a[size++] = element;
}

template<class T>
void Array<T>::InsertFirst(T element) {

	if (size >= n)
	{
		printf("The array is full.");
		return;
	}

	if (size == 0)
	{
		a[size++] = element;
		return;
	}

	int i = size;

	while (i > 0) {
		a[i] = a[i - 1];
		i--;
	}

	a[i] = element;

	size++;
}

template<class T>
void Array<T>::InsertAt(T element,int i) {

	if (size >= n)
	{
		printf("The array is full.");
		return;
	}

	if (i == 0)
	{
		InsertFirst(element);
		return;
	}

	if (i == size) {
		InsertLast(element);
		return;
	}
	

	int j = size;

	while (j > i) {
		a[j] = a[j - 1];
		j--;
	}

	a[i] = element;

	size++;
}

template<class T>
void Array<T>::DeleteAt(int i) {

	if (i > size - 1 || i < 0 || size == 0)
	{
		printf("Deletion can not be performed.");
		return;
	}

	if (i == 0) {
		DeleteFirst();
		return;
	}

	if (i == size - 1)
	{
		DeleteLast();
		return;
	}

	while (i < size - 1) {
		a[i] = a[i+1];
		i++;
	}

	DeleteLast();
}


template<class T>
void Array<T>::DeleteLast() {

	if (size == 0)
	{
		printf("Deletion can not be performed.");
		return;
	}

	a[size] = -1;
	size--;

}

template<class T>
void Array<T>::DeleteFirst() {

	if (size == 0)
	{
		printf("Deletion can not be performed.");
		return;
	}

	if (size == 1) {
		a[0] = -1;

		size--;
		return;
	}

	int i = 0;

	while (i < size - 1) {
		a[i] = a[i+1];

		i++;
	}

	DeleteLast();

}

template<class T>
void Array<T>::Display() {

	printf("Elements are : ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

}

int main() {

	const int size = 10;
	Array<int> array(size);

	for (int i = 0; i < size; i++)
	{
		array.InsertAt(i,i);
	}

	array.Display();

	array.DeleteAt(4);

	array.Display();

	return 0;
}