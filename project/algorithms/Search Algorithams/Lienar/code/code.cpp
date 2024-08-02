

#include <iostream>

using namespace std;

int LinearSearch(int a[],int n,int key) {

    int i;

	for (i = 0; i < n; i++)
	{
		if (a[i] == key)
			return i;
	}

	return -1;
}

int main()
{
    int arr[5] = { 5, 15, 6, 9, 4 };

	int key = 5;

	int answer = LinearSearch(arr, 5, key);

	if (answer != -1)
		cout << "The element " << key << " was successfuly found at position/index " << answer << " in the array.";
	else
		cout << "The element " << key << " was NOT found.";

}

