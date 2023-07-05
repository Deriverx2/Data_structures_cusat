#include <iostream>

//RECURRENCE FUNCTION FOR REVRSING STRING
void reverse(int i, std::string str){
    if (str[i] == '\0') std::cout << ("");
    else{
        reverse(++i, str);
        std::cout << str[i];
    }
}

int main(){
    std::string s;

    std::cout << "Enter a string: ";
    std::getline(std::cin, s);

    reverse(0, s);
    
    return 0;
}
//INPUT: HELLO WORLD
//OUTPUT: DLROW OLLEH