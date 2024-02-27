#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    return;
}

void reverseArr(int arr[], int n)
{
    // It will reverse the array without recursion.
    int temp;
    for (int i = 0; i <= n / 2; i++)
    {
        temp = arr[n - 1 - i];
        arr[n - 1 - i] = arr[i];
        arr[i] = temp;
    }
    return;
}

void reverseArrRecursive(int arr[], int start, int end)
{
    // It will reverse the array using recursion.
    int temp;
    if (start > end)
        return;

    temp = arr[end];
    arr[end] = arr[start];
    arr[start] = temp;
    reverseArrRecursive(arr, start + 1, end - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int temp;
    int n = sizeof(arr) / sizeof(arr[0]);
    /*
     * sizeof(arr) will return "no of elements in array x size of data-type of array"
     * sizeof(arr[0]) will return "size of data-type of first elemnt"
     */

    // reverseArr(arr, n);
    reverseArrRecursive(arr, 0, n - 1);
    printArr(arr, n);

    return 0;
}

// Time complexity: O(n)
// Space complexity: O(1)