#include <iostream>
#include<vector>
using std::cin,std::cout,std::endl,std::vector;

void bucketSort(float* arr, int N){
    vector<float> b[N];
    for (int i = 0; i < N; i++) {
        int bi =n*arr[i];
        b[bi].push_back(arr[i]); 
    }
    
}

int main()
{
    int N;
    cout << "Enter number of Elements:";
    cin >> N;
    float arr[N];
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
    bucketSort(arr, N);
    cout << "After sort:";
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}