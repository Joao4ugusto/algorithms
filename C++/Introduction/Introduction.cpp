// Input/Output
#include <iostream>

int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    std::cout << "You entered: " << number << std::endl;
    return 0;
}
 
// Functions
int num(int a, int b){
    return a + b;
}

int main(){
    int a, b;

    std::cout << "Enter an integer a: ";
    std::cin >> a;

    std::cout << "Enter an integer b: ";
    std::cin >> b;

    std::cout << num(a, b) << std::endl;
}


