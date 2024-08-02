

#include <iostream>

using namespace std;

void Sort(int a[], int n) {
	int i, j, item;
	for (i = 0; i < n; i++)
	{
		item = a[i];

		j = i - 1;

		while (j >= 0&& item < a[j])
		{
			a[j + 1] = a[j];
			j--;
		}

		a[j + 1] = item;

	}

}

int InterpolationSearch(int a[], int n, int key) {

	int i,pos, lb = 0, ub = n-1;

	while (lb < ub && key <= a[ub] && key >= a[lb]) {

		pos = lb + ((key - a[lb]) * (ub - lb)) / (a[ub] - a[lb]);

		if (a[pos] == key)
			return pos;

		if (a[pos] < key)
			lb = pos + 1;
		else
			ub = pos - 1;
	}
	return -1;
}

int main()
{
	const int size = 5;
	int a[size] = { 5, 15, 6, 9, 4 };

	Sort(a, size);

	printf("The array holds following elements : ");

	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}

	int key = 6;

	int answer = InterpolationSearch(a, size, key);

	if (answer != -1)
		cout << "\nThe element " << key << " was successfuly found at position/index " << answer << " in the array.";
	else
		cout << "\nThe element " << key << " was NOT found.";

}

