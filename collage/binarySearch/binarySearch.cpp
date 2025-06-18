#include <iostream>
using namespace std;
int binarySearch(int arr[], int tar, int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        // cout << mid << endl;
        if (tar > arr[mid])
        {
            start = mid + 1;
        }
        else if (tar < arr[mid])
        {
            end = mid - 1;
        }
        else if (tar == arr[mid])
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << binarySearch(arr, 4, 5) << endl;

    return 0;
}