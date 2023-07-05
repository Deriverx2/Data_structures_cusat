#include <iostream>

//RECURSIVE FUNCTION FOR SUM OF DIGITS
int Digit_sum(int N){
    if (N/10==0) return N%10;
    else return N%10 + Digit_sum(N/10);
}

int main(){
    int N;

    std::cout << "\nEnter number to find sum of digits: ";
    std::cin >> N;

    std::cout << "Sum of Digits: " << Digit_sum(N);
    
    return 0;
}
//INPUT: 258
//OUTPUT: SUM OF DIGITS: 15