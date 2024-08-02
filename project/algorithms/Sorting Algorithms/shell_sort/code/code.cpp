#include<iostream>

using namespace std;

void print(int a[], int n) {

	int i;

	for (i = 0; i < n; i++) {
		cout << a[i];

		if (i != n - 1) {
			cout << ", ";
		}
	}
}

void InsertionSort(int a[], int n, int step) {

	int i,j,item;
	for (i = step; i < n; i++)
	{
		item = a[i];
		j = i ;

		while (j >= step && item < a[j - step])
		{
			a[j] = a[j - step];
			j-=step;
		}

		a[j] = item;
	}
}

void ShellSort(int a[], int n) {

	int iteration = 1;

	for (int step = n / 2; step > 0; step /= 2)
	{
		InsertionSort(a,n,step);

		cout << "\nThe list in iteration " << iteration++ << " looks like this : \n";
		print(a, n);
	}


}


int main()
{
	int a[30], n, i;

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

	ShellSort(a, n);

	cout << "\nThe sorted list is : \n";

	print(a, n);

	return 1;
}