#include <iostream>
using std::cout, std::cin;

int getn(int arr[], int N, int l, int r)
{
    // cout<<"n:"<<r;
    if (r >= N)
    {
        r = N - 1;
    }
    if (l > r)
    {
        return -1;
    }
    if (arr[r] < 0 && arr[r - 1] >= 0)
    {
        return r;
    }
    else if (arr[l] >= 0 && arr[l + 1] < 0)
    {
        return l+1;
    }
    else if (arr[r] >= 0)
    {
        return getn(arr, N, r+1, r * 2);
    }
    else
    {
        return getn(arr, N, l + 1, (l + r) / 2);
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
    cout << "position:" << getn(arr, N, 0, 1);
    return 0;
}
