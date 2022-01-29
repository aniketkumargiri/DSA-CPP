#include <bits/stdc++.h>
using namespace std;

// Base case: O(n)
// Worst case: O(n^2)
// Space complexity: O(1)
// Stable Algorithm
// Best for sorted array
// Push the largest element of the array in the last by comparing i'th and (i+1)'th element by traversing two loops
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            // already sorted
            break;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[] = {1, 4, 13, 27, 34, 47};

    bubbleSort(arr, 6);

    printArray(arr, 6);

    return 0;
}