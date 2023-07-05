#include <iostream>

void read_arr(int *arr, int n){
    std::cout << "Enter elements of array " << std::endl;
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
}

void sec_max(int *arr, int size){
    int max = arr[0];
    int sec_max;
    for (int i = 1; i < size; i++){
        if (arr[i] > max){
            sec_max = max;
            max = arr[i];
        }
        else if (arr[i] > sec_max){
            sec_max = arr[i];
        }
    }
    std::cout << sec_max << " is the second largest element" << std::endl;
}

int main()
{
    int *arr;
    int n;
    std::cout << "Enter size of array(<=100): ";
    std::cin >> n;
    arr = new int[n];
    read_arr(arr, n);
    sec_max(arr, n);
    return 0;
}
/*Enter size of array(<=100): 11
Enter elements of array
15
13
16
15
23
46
49
74
99
100
1001
100 is the second largest element*/