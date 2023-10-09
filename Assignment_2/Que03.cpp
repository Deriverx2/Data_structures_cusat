// Implement the Selection sort algorithm, to sort an array of strings in the lexicographical order.
#include <iostream>

using std::cout, std::cin, std::endl, std::string;

void selectionSort(string *arr, int N)
{
    for (int i = 0; i < N; i++)
    {
        int index = i;
        for (int j = 0; j < N; j++)
        {
            if (arr[j] > arr[index])
            {
                index = j;
            }
            if (i != index)
            {
                swap(arr[i], arr[index]);
            }
        }
    }
}

int main()
{
    int N;
    cout << "Enter number of Elements:";
    cin >> N;
    string arr[N];
    cout << "Enter elements";
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
    selectionSort(arr, N);
    cout << "After sort:";
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}