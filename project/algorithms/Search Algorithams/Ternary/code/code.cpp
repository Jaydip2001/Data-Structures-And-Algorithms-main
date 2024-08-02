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

int TernarySearch(int a[],int start, int end, int key) {

	int interval = end / 3, mid1 = start + interval, mid2 = mid1 + interval;

	while (mid1 <= mid2) {

		if (a[mid1] == key)
			return mid1;

		if (a[mid2] == key)
			return mid2;

		if (a[mid1] > key) 
			return TernarySearch(a,start,mid1,key);		
		else if (a[mid2] > key) 
			return TernarySearch(a, mid1, mid2, key);		
		else	
			return TernarySearch(a, mid2, end, key);
	}

	return -1;
}


int main() {

	const int size = 9;

	int a[size] = { 35, 93, 71, 4, 13, 42, 21, 52, 62 };

	InsertionSort(a, size);

	printf("The array contains following elements : ");

	for (int i = 0; i < size; i++)
		printf("%d ", a[i]);

	int key = 62;

	int result = TernarySearch(a,0, size, key);

	if (result == -1)
		printf("\nThe element %d was not found", key);
	else
		printf("\nThe lement %d was found at index %d", key, result);


	return 0;
}