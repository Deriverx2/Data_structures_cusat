//Implement the bubble sort algorithm, to sort n real numbers in ascending order.
#include <iostream>

using std::cout, std::cin, std::endl, std::swap;

void bubSort(double *arr, int N)
{
    for (int i = N - 1; i >= 0; i--)
    {
        bool swapped = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main()
{
    int N;
    cout << "Enter number of Elements:";
    cin >> N;
    double arr[N];
    cout << "Enter elements :";
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cout << "Before sort: ";
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    bubSort(arr, N);
    cout << "After sort: ";
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}