
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++)
    {

        // Find the minimum element in
        // unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element
        // with appropriate slot
        if (min_idx != i)
			(arr[min_idx] ^= arr[i]), (arr[i] ^= arr[min_idx]), (arr[min_idx] ^= arr[i]); //single line swap

    }
}


#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int i, a[30], n, j, temp, item;

	cout << "Enter list size : ";
	cin >> n;

	for (i = 0; i < n; i++) {
		cout << "Enter element no. " << i + 1 << " : ";
		cin >> a[i];
	}

	cout << "The unsorted list : \n";

	for (i = 0; i < n; i++) {
		cout << a[i];

		if (i != n - 1) {
			cout << ", ";
		}
	}

    selectionSort(a, n);

	cout << "\nThe sorted list is : \n";

	for (i = 0; i < n; i++) {
		cout << a[i];

		if (i != n - 1) {
			cout << ", ";
		}
	}

	return 1;
}