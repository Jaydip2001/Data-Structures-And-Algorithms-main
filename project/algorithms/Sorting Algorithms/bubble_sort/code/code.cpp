//Bubble sort

#include<iostream>

using namespace std;

void bubblesort(int a[], int n)
{
	int i, j;
	for (i = n - 1; i > 0; i--) {
		for (j = 0; j < i; j++)
		{
			if (a[j] > a[j + 1]) {

				(a[j] ^= a[j + 1]), (a[j + 1] ^= a[j]), (a[j] ^= a[j + 1]); //swapping two variables in one line
			}
		}
	}
}

int main()
{
	int i, a[30], n;

	cout << "Enter Size Of Array : ";
	cin >> n;


	for (i = 0; i < n; i++) {
		cout << "Enter element no. " << i  << " :";
		cin >> a[i];
	}

	cout << "Before Sorting List Is : \n";
	for (i = 0; i < n; i++)
		cout << a[i] << " ";

	bubblesort(a, n);

	cout << "\nAfter Sorting List Is : \n";
	for (i = 0; i < n; i++)
		cout << a[i] << " ";
	

	return 0;
}