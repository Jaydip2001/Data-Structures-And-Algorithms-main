#include <iostream>

using namespace std;

void PrintArray(int a[], int n) {
	int i;

	printf("List contains follwoing elements : ");

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	printf("\n");
}

void PrintArray(int a[], int lb, int ub) {

	printf("[ ");

	for (int i = lb; i < ub; i++)
	{
		if (i == ub - 1)
			printf("%d ]\n", a[i]);
		else
			printf("%d, ", a[i]);
	}
}

void Sort(int a[], int n) {

	int i,j,item;

	int arr[10] = { 5, 15, 6, 9, 4, 10, 25, 45, 9, 1 };

	for ( i = 0; i < n; i++)
	{
		item = a[i];

		j = i - 1;

		while (j >= 0 && item < a[j]) {
			
			a[j + 1] = a[j];

			j--;
		}

		a[j + 1] = item;
	}


}

int BinarySearch(int a[], int n, int key) {

	int i = 0, mid, lb = 0,ub = n;

	while (lb <= ub) {
		mid = (lb + ub) / 2;

		if (a[mid] == key)
			return mid;

		i++;


		printf("\nIteration no. %d \n", i);

		if (a[mid] < key) {
			lb = mid;
			PrintArray(a,mid,n);
		}
		else {
			ub = mid;
			PrintArray(a, 0, mid);
		}
	}
	
}

int main()
{
	const int size = 10;

	int arr[size] = { 5, 15, 6, 9, 4, 10, 25, 45, 9, 1 };

	Sort(arr, size);

	PrintArray(arr, size);

	int key = 25;

	int answer = BinarySearch(arr, size, key);

	if (answer != -1)
		cout << "\nThe element " << key << " was successfuly found at position/index " << answer << " in the array.";
	else
		cout << "\nThe element " << key << " was NOT found.";

}

