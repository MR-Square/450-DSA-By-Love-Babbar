#include <iostream>
using namespace std;

int main()
{
    /// REVERSE THE ARRAY

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    /**
     * sizeof(arr) will return "no of elements in array x size of data-type of array"
     * sizeof(arr[0]) will return "size of data-type of first elemnt"
     */

    int s = 0, e = size - 1, temp;
    /*
     * "s" is used to travel from left to right in array.
     * "e" is used to travel from right to left in array.
     * "temp" is used to store an element temporarily.

    */

    // Reversing an array:
    while (s < e)
    {
        temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }

    // Printing reverse array:
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}

// Time complexity: O(n)
// Space complexity: O(1)