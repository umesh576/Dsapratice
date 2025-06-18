
#include <iostream>
using namespace std;

int main()
{
    bool isRun = true;
    int arr[4] = {2, 7, 6, 5};
    int target = 9;
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            int metTag = arr[i] + arr[j];

            if (metTag >= target)
            {
                cout << i << " " << j << endl;
                isRun = false;
                break;
            }
        }
        if (!isRun)
        {
            break;
        }
    }
    return 0;
}