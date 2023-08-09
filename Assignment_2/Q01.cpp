#include <iostream>

using std::cout,std::cin,std::endl,std::swap;

void bubSort(double* arr, int N){
    for (int i = 0; i < N-1; i++) {
        bool swapped=false;
        int j=i;
        while(j>=0 && arr[j+1]<arr[j]){
            swap(arr[j],arr[j+1]);
            swapped=true;
            j--;
        }
        if(swapped==false)break;
    }
    
}


int main()
{
    int N;
    cout<<"Enter number of Elements:";
    cin>>N;
    double arr[N];
    cout<<"Enter elements";
    for (int i = 0; i < N; i++) {
        cin>>arr[i];
    }
    cout<<"Before sort:";
    for (int i = 0; i < N; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubSort(arr,N);
    cout<<"After sort:";
    for (int i = 0; i < N; i++) {
        cout<<arr[i]<<" ";
    }
    
}
