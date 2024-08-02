//MERGE SORT
#include<iostream>

using namespace std;

void mergesort(int a[], int start, int mid, int end)
{
	int i = start, j = mid + 1, k = 0, b[50];
	while (i <= mid && j <= end)
	{
		if (a[i] < a[j])
			b[k++] = a[i++];
		else
			b[k++] = a[j++];
	}
	while (i <= mid)
		b[k++] = a[i++];
	while (j <= end)
		b[k++] = a[j++];
	for (k = 0; k <= end - start; k++)
		a[k + start] = b[k];
}

void merge(int a[], int low, int high)
{
	int mid;
	if (low < high)
	{
		mid = (low + high) / 2;
		merge(a, low, mid);
		merge(a, mid + 1, high);
		mergesort(a, low, mid, high);
	}
}
int main()
{
	int i, a[30], n;

	cout << "Enter Size Of Array : ";
	cin >> n;

	for (i = 0; i < n; i++) {
		cout << "Enter element no. " << i <<" : ";
		cin >> a[i];
	}

	cout << "Before Sorting List Is : \n";
	for (i = 0; i < n; i++)
		cout << a[i] << " ";

	merge(a, 0, n - 1);

	cout << "\nAfter Sorting List Is : \n";
	for (i = 0; i < n; i++)
		cout << a[i] << " ";

	return 0;
}