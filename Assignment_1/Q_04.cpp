#include <iostream>

//RECURSIVE FUNCTION TO CHECK IF PALINDROME
int palindrome(std::string str, int i, int j){
    if (str[i]!=str[j]) {
        std::cout << "GIVEN STRING IS NOT PALINDROME" << std::endl;
        return 0;
        }
    else if (i<j){
        std::cout << "GIVEN STRING IS PALINDROME" << std::endl;
        return 1;
    } 
    else return palindrome(str, ++i, --j);
}

int main(){
    std::string s;

    std::cout << "Enter a string: ";
    std::getline(std::cin, s);

    palindrome(s, 0, s.length() - 1);
    
    return 0;
}

//INPUT: RACECAR
//OUTPUT: GIVEN STRING IS PALINDROME