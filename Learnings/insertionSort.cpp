#include <iostream>
void insertionSort(int *arr, int n){
// insertion sort
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    // getting array size
    int n;
    std::cout << "Enter array size: ";
    std::cin >> n;

    // getting elements of array
    int arr[n];
    std::cout << "Enter unsorted elements of array: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << "Unsorted array:" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << "\t";
    }

    insertionSort(arr,n);

    std::cout << "\nSorted array:" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << "\t";
    }
    
    return 0;
}