#include <iostream>

using std::cout,std::cin,std::endl,std::string;

void stringSort(string* arr, int N){
    for (int i = 0; i < N-1; i++) {
        bool swapped=false;
        int j=i;
        while(j>=0 && (arr[j+1][0]<arr[j][0])){
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
    string arr[N];
    cout<<"Enter elements";
    for (int i = 0; i < N; i++) {
        cin>>arr[i];
    }
    cout<<"Before sort:";
    for (int i = 0; i < N; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    stringSort(arr,N);
    cout<<"After sort:";
    for (int i = 0; i < N; i++) {
        cout<<arr[i]<<" ";
    }
    
}
