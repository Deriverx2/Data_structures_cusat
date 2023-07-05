#include <iostream>
#include <set>

void read_arr(char *arr, int n){
    int count = 0;
    std::cout << "Enter char elements of array " << std::endl;
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
}

void dupe_count(char *arr, int n){
    int count = 0;
    std::set <char> frequency;
    for (int i = 0; i < n; i++){
        if (frequency.count(arr[i])) count++;
        else frequency.insert(arr[i]);
    }
    std::cout << count << " duplicates has been found in array " << std::endl;
}
    
int main()
{
    char *arr;
    int n;
    std::cout << "Enter size of array(<=100): ";
    std::cin >> n;
    arr = new char[n];
    read_arr(arr, n);
    dupe_count(arr, n);
    return 0;
}
/*Enter size of array(<=100): 5
Enter char elements of array
a
s
s
s
a
3 duplicates has been found in array*/