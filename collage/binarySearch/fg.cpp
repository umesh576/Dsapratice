#include <iostream>
#include <vector>
using namespace std;

int findArray(int ar[], int size, int n)
{
    int mid = size / 2;
    cout << mid << endl;

    if (ar[mid] == n) // If the middle element is the target
    {
        return ar[mid];
    }
    else if (n < ar[mid]) // If the number is less than the middle element
    {
        return findArray(ar, mid, n); // Recursive call to search the left half
    }
    else if (n > ar[mid]) // If the number is greater than the middle element
    {
        vector<int> newArr;
        for (int i = mid + 1; i < size; i++) // Copy elements from mid + 1 to end
        {
            newArr.push_back(ar[i]);
        }

        // Print the new array values (elements greater than mid)
        for (int i = 0; i < newArr.size(); i++)
        {
            cout << newArr[i] << endl;
        }
        return -1; // Return -1 if not found
    }
    return -1; // If the number is not found
}

int main()
{
    int size = 10;
    int arr[size] = {1, 2, 5, 6, 9, 10, 11, 12, 15, 18};
    int val = findArray(arr, size, 11);        // Find number 11 in the array
    cout << "Returned Value: " << val << endl; // Print the return value from findArray
    return 0;
}
