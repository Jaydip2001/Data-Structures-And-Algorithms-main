#include <iostream>

void Sort(int a[],int n) {

    int i, j, item;

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

}

int GetFibSequence(int num) {

    int f1 = -1, f2 = 1, f3;

    while(f2 <= num) {
        f3 = f1 + f2;
        f1 = f2; 
        f2 = f3;

        if (f3 == num)
            return f3;

        if (f3 > num)
            return f1;
    }

}

int FibonacciSearch(int a[], int lb, int ub, int num) {

    while (lb < ub)
    {
        int flag = 0, count = 0, cl = 1, mid;

        for (int i = lb; i < ub; i++)
        {
            count++;

            mid = GetFibSequence(count);

            

            for (i = lb;i < ub && cl == 1;i++)
            {
                flag++;

                if (flag == mid)
                    mid = lb, cl = 0;

                if (a[mid] == num)
                    return mid;

                else if (a[mid] > num)
                    ub = mid - 1;

                else
                    ub = mid + 1;

                i++;
            }
        }
    }

}

int main()
{

    const int size = 10;
    int a[size] = { 4, 2, 6, 3, 1, 5, 7, 8, 10, 21 };

    Sort(a, size);

    printf("The data sequence is : ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }

    int answer = FibonacciSearch(a, 0, size, 4);

    printf("Element was successfuly found at position %d",answer);
    
    return 0;
}
