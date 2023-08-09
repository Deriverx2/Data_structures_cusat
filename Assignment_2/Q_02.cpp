#include <iostream>

using std::cout,std::cin,std::endl;

void insSort(unsigned int* arr, int N){
    for (int i = 1; i < N; i++) {
        unsigned int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]<key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    
}


int main()
{
    int N;
    cout<<"Enter number of Elements:";
    cin>>N;
    unsigned int arr[N];
    cout<<"Enter elements";
    for (int i = 0; i < N; i++) {
        cin>>arr[i];
    }
    cout<<"Before sort:";
    for (int i = 0; i < N; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insSort(arr,N);
    cout<<"After sort:";
    for (int i = 0; i < N; i++) {
        cout<<arr[i]<<" ";
    }
    
}
