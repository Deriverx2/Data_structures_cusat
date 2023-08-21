#include <iostream>

void selectionSort(int *arr, int n){
    

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

    selectionSort(arr, n);

    std::cout << "Sorted array:" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << "\t";
    }

    

    return 0;
}