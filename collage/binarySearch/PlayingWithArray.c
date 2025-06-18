#include <stdio.h>
#define MAX 10
int arr[MAX] = {11, 22, 44, 55, 66};
int pos = 4;

void InsertEnd(int value)
{
    if (pos >= MAX - 1)
    {
        printf("array is full\n");
    }
    else
    {
        arr[++pos] = value;
        printf("\n%d value have been inserted in end.\n", value);
    }
}

void InsertFirst(int value)
{
    if (pos >= MAX - 1)
    {
        printf("array is full\n");
    }
    else
    {
        for (int i = pos; i >= 0; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[0] = value;
        printf("\n%d value have been inserted in beginning.\n", value);
        pos++;
    }
}

void InsertMid(int value, int place)
{
    if (pos >= MAX - 1)
    {
        printf("arry is full\n");
    }
    else if (place < 0 || place > pos)
    {
        printf("\ninvalid\n");
    }
    else
    {
        for (int i = pos; i >= place; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[place] = value;
        printf("\n\n%d value is inserted in %d place\n", value, place);
        pos++;
    }
}

void DisplaySorted(char order)
{
    int temp;
    if (pos == -1)
    {
        printf("array is empty\n");
    }
    else
    {
        for (int i = 0; i <= pos; i++)
        {
            for (int j = i + 1; j <= pos; j++)
            {
                if ((order == 'a' && arr[i] > arr[j]) || (order == 'd' && arr[i] < arr[j]))
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        printf("\n\nSorted array:\n\n");
        for (int i = 0; i <= pos; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
}

void DisplayAll()
{
    if (pos == -1)
    {
        printf("array is empty\n");
    }
    else
    {
        for (int i = 0; i <= pos; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
}

int main()
{
    int arr[MAX] = {11, 22, 44, 55, 66};
    DisplayAll();
    InsertEnd(77);
    InsertEnd(88);
    DisplayAll();
    InsertFirst(101);
    InsertFirst(505);
    DisplayAll();
    InsertMid(1000,4);
    DisplayAll();
    DisplaySorted('a');
    DisplaySorted('d');
    return 0;
}