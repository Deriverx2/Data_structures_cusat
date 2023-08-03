#include <iostream>
using std::cout, std::cin;

int getn(int arr[], int l, int r)
{
    // cout<<"n:"<<r;
    if (l > r)
    {
        return -1;
    }
    int mid = (l + r) / 2;
    if (arr[mid - 1] >= 0 && arr[mid] < 0)
    {
        return mid;
    }
    else if (arr[mid] < 0)
    {
        return getn(arr, l + 1, mid - 1);
    }
    else
    {
        return getn(arr, mid + 1, r);
    }
}//if the return value is -1 there are no position satisfying the condition

int main()
{
    int N;
    cout << "Enter size of array:";
    cin >> N;
    int arr[N];
    cout << "Enter elements of array:";
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cout << "position:" << getn(arr, 0, N - 1);
    return 0;
}
