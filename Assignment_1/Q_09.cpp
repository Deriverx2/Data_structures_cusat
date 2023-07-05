// /*Write a program to merge two sorted arrays of the same size to get a resultant array which
// is sorted in the reverse order.*/

#include <iostream>

void read_arr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
}


void merge(int *arr1, int *arr2, int *arr3, int n)
{
    for (int i = n; i > 0; i--)
    {
        arr3[n - i] = arr1[i - 1];
        arr3[2 * n - i] = arr2[i - 1];
    }
}

void reverse_sort(int *arr, int n){
    for (int i = n-2; i >= 0; i--){
        int key=arr[i];
        int j=i+1;
        while(j<n && arr[j] > key)
        {
            arr[j-1] = arr[j];
            ++j;
        }
        arr[j -1] = key;
    }
}

void print_arr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int *arr1;
    int *arr2;
    int *arr3;
    int n;

    std::cout << "Enter size of arrays(<=100): ";
    std::cin >> n;

    arr1 = new int[n];
    arr2 = new int[n];

    std::cout << "Enter elements of array1 " << std::endl;
    read_arr(arr1, n);

    std::cout << "Enter elements of array2 " << std::endl;
    read_arr(arr2, n);

    arr3 = new int[2 * n];
    merge(arr1, arr2, arr3, n);
    
    std::cout << "\nArray1: ";
    print_arr(arr1, n);

    std::cout << "\nArray2: ";
    print_arr(arr2, n);

    reverse_sort(arr3, 2*n);
    
    std::cout << "\nResultant Array: ";
    print_arr(arr3, 2 * n);
    return 0;
}
/*Enter size of arrays(<=100): 4
Enter elements of array1
1 2 3 4
Enter elements of array2
5 6 7 8

Array1: 1 2 3 4

Array2: 5 6 7 8

Resultant Array: 8 7 6 5 4 3 2 1*/