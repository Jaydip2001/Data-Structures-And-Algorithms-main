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

	for (i = 0; i < n; i++)
	{
		item = a[i];
		j = i - 1;

		while (j >= 0 && item < a[j])
		{
			a[j + 1] = a[j];
			j--;
		}

		a[j + 1] = item;
	}

	cout << "\nThe sorted list is : \n";

	for (i = 0; i < n; i++) {
		cout << a[i];

		if (i != n - 1) {
			cout << ", ";
		}
	}

	return 1;
}