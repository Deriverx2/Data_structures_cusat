#include <iostream>

void read_arr(int *arr, int n);
void print_arr(int *arr, int n);
void search_arr(int *arr, int n, int elem);
void get_max(int *arr, int n);
void get_min(int *arr, int n);

int main(){
    int *arr;
    int n;
    int choice;
    std::cout << "\n****************MENU****************" << std::endl;
    std::cout << "1. Enter size and elements of array" << std::endl;
    std::cout << "2. Print elements of array" << std::endl;
    std::cout << "3. Search an element in array" << std::endl;
    std::cout << "4. Print largest and smallest element of array" << std::endl;
    std::cout << "5. Exit" << std::endl;
    do{
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            std::cout << "Enter size of array(<=100): ";
            std::cin >> n;
            arr = new int[n];
            read_arr(arr, n);
            break;
        
        case 2:
            std::cout<< "Elements of array" << std::endl;
            print_arr(arr, n);
            break;
        case 3:
            int elem;
            std::cout << "Enter element to search :";
            std::cin >> elem;
            search_arr(arr, n, elem);
            break; 
        case 4:
            get_max(arr, n);
            get_min(arr, n);
            break;
        case 5:
            std::cout << "THANK YOU FOR USING OUR PROGRAM" << std::endl;
            break;
        default:
            std::cout << "Enter a valid choice!!!" << std::endl;
            break;
        }
        std::cout<< "*************************************" << std::endl;
    }while(choice != 5);
    return 0;
}

void read_arr(int *arr, int n){
    std::cout << "Enter elements of array " << std::endl;
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    std::cout << "Array of size " << n << " is created" << std::endl;
}

void print_arr(int *arr, int n){
    for (int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void search_arr(int *arr, int n, int elem){
    bool found = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == elem){
            found = 1;
            std::cout << "FOUND:)" << std::endl;
            break;
        }
    }
    if (found == 0) std::cout << "SORRY:(" << std::endl;
}

void get_max(int *arr, int n){
    int max = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    std::cout << max << " is the largest element" << std::endl;
}

void get_min(int *arr, int n){
    int min = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    std::cout << min << " is the smallest element" << std::endl;
}

/*****************MENU****************
1. Enter size and elements of array
2. Print elements of array
3. Search an element in array
4. Print largest and smallest element of array
5. Exit
Enter choice: 1
Enter size of array(<=100): 5
Enter elements of array
5
4
3
2
1
Array of size 5 is created
*************************************
Enter choice: 2
Elements of array
5 4 3 2 1
*************************************
Enter choice: 3
Enter element to search :5
FOUND:)
*************************************
Enter choice: 4
5 is the largest element
1 is the smallest element
*************************************
Enter choice: 5
THANK YOU FOR USING OUR PROGRAM
**************************************/