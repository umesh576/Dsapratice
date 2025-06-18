#include <iostream>
using namespace std;
int findArray(int ar[], int size, int n)
{
    int step = 1;

    int length = size;

    int newArr[(length) / 2];

    int mid = (length) / 2;

    int x = 0;
    // if number is same as the middle number
    if (ar[mid] == n)
    {
        return ar[mid];
    }

    // if number is less thsn middle number
    else if (n < ar[mid])
    {

        length = mid;
    }

    // if number is more than middle number
    else if (n > ar[mid])
    {
        for (int i = mid + 1; i < length; i++)
        {
            newArr[x] = ar[i];
            x++;
        }
        for (int i = 0; i < mid; i++)
        {
            cout << newArr[i] << endl;
        }
        return -1;
    }
}
int main()
{
    int size = 10;
    int arr[size] = {1, 2, 5, 6, 9, 10, 11, 12, 15, 18};
    int val = findArray(arr, size, 11);

    return 0;
}