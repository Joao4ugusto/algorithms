#include <iostream>

int add( int num_01 , int num_02){
  return num_01 + num_02;
}

int main(){
  int number_1;
  int number_2;
  
  std::cout << "Enter an integer 01: ";
  std::cin >> number_1;
  std::cout << "Enter an integer 02: ";
  std::cin >> number_2;

  int result = add(number_1 , number_2);
  std::cout << number_1 << " + " << number_2 << " : " << result << std::endl;

}