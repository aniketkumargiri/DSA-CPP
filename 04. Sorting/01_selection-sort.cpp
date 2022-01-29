#include <bits/stdc++.h>
using namespace std;

// Base case: O(n^2)
// Worst case: O(n^2)
// Space complexity: O(1)
// Unstable Algorithm
// Constraints: Better suited for small size arrays
// select the minimum element by traversing the array and swap the i'th index by the smallest element of the array
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        swap(arr[minIdx], arr[i]);
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

    int arr[] = {23, 12, 4, 89, 56, 34};

    selectionSort(arr, 6);

    printArray(arr, 6);

    return 0;
}