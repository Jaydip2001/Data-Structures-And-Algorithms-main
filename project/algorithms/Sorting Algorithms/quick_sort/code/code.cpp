//QUICK SORT
#include<iostream>

using namespace std;

int partition(int a[], int start, int end)
{
    int pivot = a[end];
    int i = (start - 1);
    for (int j = start; j <= end - 1; j++)
    {
        if (a[j] <= pivot)
        {
            i++;
            if(i!=j)
                (a[i] ^= a[j]), (a[j] ^= a[i]), (a[i] ^= a[j]); //swapping two variables in one line
        }
    }
    if (i + 1 != end)
        (a[i+1] ^= a[end]), (a[end] ^= a[i+1]), (a[i+1] ^= a[end]); //swapping two variables in one line

    return (i + 1);
}

void quick_sort(int a[], int start, int end)
{
    if (start < end)
    {
        int pivot_index = partition(a, start, end);
        quick_sort(a, start, pivot_index - 1);
        quick_sort(a, pivot_index + 1, end);
    }
}


void main()
{
	int i, a[30], n;

	cout << "Enter Size Of Array : ";
	cin >> n;

	for (i = 0; i < n; i++) {
		cout << "Enter element no. : " << i + 1 << " : ";
		cin >> a[i];
	}

	cout << "Before Sorting List Is : \n";
	for (i = 0; i < n; i++)
		cout << a[i] << " ";

    quick_sort(a, 0, n - 1);

	cout << "\nAfter Sorting List Is : \n";
	for (i = 0; i < n; i++)
		cout << a[i] << " ";
}