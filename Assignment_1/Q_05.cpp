#include <iostream>

//RECURSIVE FUNCTION DECIMALTO BINARY
int binary(int num){
    if (num == 0) return 0;
    else return ((binary(num/2))*10)+num%2;
}

int main(){
    int num;

    std::cout << "Enter a binary number: ";
    std::cin >> num;

    std::cout << "Binary:" <<binary(num);
    
    return 0;
}
//INPUT: 25
//OUTPUT: 11001