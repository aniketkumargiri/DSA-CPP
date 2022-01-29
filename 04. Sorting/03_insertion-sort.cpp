#include <bits/stdc++.h>
using namespace std;

// Base case: O(n^2)
// Worst case: O(n^2)
// Space complexity: O(1)
// Addaptable Algorithm
// Stable Algorithm
// Best for partially sorted array
// Assume first element as the sorted one and compare with next element. If next element is less than previous then insert at the previous element positionand shift all the positions right. Repeat this process untill the last till the array is sorted
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
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

    insertionSort(arr, 6);

    printArray(arr, 6);

    return 0;
}