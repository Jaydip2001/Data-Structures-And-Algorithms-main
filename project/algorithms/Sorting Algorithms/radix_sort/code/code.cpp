//Radix sort

#include<iostream>

using namespace std;

void RadixSort(int a[],int max, int n)
{
	int b[50],q,digit,p = 0,i,j,k,temp;

	for (i = 0; i < max; i++)
	{
		q = 0;
		p = pow(10, i);

		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k < n; k++) 
			{
				digit = (a[k] / p) % 10;

				if (digit == j) {
					b[q++] = a[k];
				}
			}
		}
		for (temp = 0; temp < n; temp++)
		{
			a[temp] = b[temp];
		}

	}

}

int MaxLengthNumber(int a[], int n) {
	int max = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] > a[max])
			max = i;
	}

	int number = a[max];
	int c = 0;

	while (number>0)
	{
		number /= 10;
		c++;
	}

	return c;
}

int main()
{
	int i, a[30], n;

	cout << "Enter Size Of Array : ";
	cin >> n;


	for (i = 0; i < n; i++) {
		cout << "Enter element no. " << i << " :";
		cin >> a[i];
	}

	cout << "Before Sorting List Is : \n";
	for (i = 0; i < n; i++)
		cout << a[i] << " ";

	int max = MaxLengthNumber(a, n);

	RadixSort(a, max, n);

	cout << "\nAfter Sorting List Is : \n";
	for (i = 0; i < n; i++)
		cout << a[i] << " ";

	return 0;
}