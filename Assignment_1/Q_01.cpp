#include <iostream>

class Factorial{
    private:
        int N;
    public:
        Factorial(){}
        Factorial(int n) : N(n) {}
        int fact(int n);
        void print();
};

//RECURSICE FUNCTION FOR N FACTORIAL
int Factorial::fact(int n){
    if (n==0) return 1;
    else return n*fact(n-1);
}

//FUNCTION TO PRINT FACTORIAL VALUE
void Factorial::print(){
    std::cout << "\nFactorial of "<< N << " is "<< fact(N)<<std::endl;
    std::cin.get();
}

int main(){
    int n;
    
    std::cout << "Enter the number to find factorial of: ";
    std::cin >> n;

    Factorial ob(n);
    ob.print();

    return 0;
}
//INPUT: 10
//OUTPUT: FACTOIRAL OF 10 IS 3628800;