#include <iostream>

void InsertionSort(int a[], int n) {


	for (int i = 0; i < n; i++)
	{
		int item = a[i];

		int j = i - 1;

		while (item < a[j] && j >= 0)
		{
			a[j + 1] = a[j];
			j--;
		}

		a[j + 1] = item;
	}

}

int LinearSearch(int a[],int start, int end, int key) {

	for (int i = start; i < end; i++)
	{
		if (a[i] == key)
			return i;
	}

	return -1;
}

int JumpSearch(int a[], int n, int key) {

	int jump_interval = 0;

	while (a[jump_interval] <= key && jump_interval < n)
	{
		if (a[jump_interval] == key)
			return jump_interval;

		jump_interval += sqrt(n);
	}

	jump_interval -= sqrt(n);

	return LinearSearch(a, jump_interval, jump_interval + sqrt(n), key);

}


int main() {

	const int size = 20;

	int a[size] = { 35, 93, 71, 4, 13, 42, 21, 52, 62, 11, 46, 18, 2, 38, 23, 99, 12, 60, 41, 72 };

	InsertionSort(a, size);

	printf("The array contains following elements : ");

	for (int i = 0; i < size; i++)
		printf("%d ",a[i]);
	
	int key = 52;

	int result = JumpSearch(a,size,key);

	if (result == -1) 
		printf("\nThe element %d was not found",key);	
	else 
		printf("\nThe lement %d was found at index %d",key,result);
	
	
	return 0;
}