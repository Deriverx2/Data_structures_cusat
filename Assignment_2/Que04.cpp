// Implement the merge sort algorithm, to sort an array of positive integers in the ascending order.

#include <iostream>

using std::cout, std::cin, std::endl;

void merge(int *arr, int l, int m, int r)
{
    int i = l, j = m + 1, k = 0;
    int size=r - l + 1;
    int temp[size];
    while (i <= m && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= m)
    {
        temp[k] = arr[i];
        k++;
        i++;
    }
    while (j <= r)
    {
        temp[k] = arr[j];
        k++;
        j++;
    }

    for (int i = 0, j = l; i < size; i++, j++)
    {
        arr[j] = temp[i];
    }
}

void mergeSort(int *arr, int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main()
{
    int N;
    cout << "Enter number of Elements:";
    cin >> N;
    int arr[N];
    cout << "Enter elements: ";
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cout << "Before sort:";
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    mergeSort(arr, 0, N - 1);
    cout << "After sort:";
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}