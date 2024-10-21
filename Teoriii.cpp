#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n, bool a)
{
    bool s;
    for (int i = 0; i < n - 1; i++)
    {
        s = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if ((a && arr[j] > arr[j + 1]) || (!a && arr[j] < arr[j + 1]))
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                s = true;
            }
        }
        if (!s)
        {
            break;
        }
    }
}

int main() {
    int arr[] = { 5, 3, 8, 4, 2, 9, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bool a = true;
    bubbleSort(arr, n, a);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
