#include <iostream>
#include <vector>

using namespace  std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      size_t size = digits.size();

      if(digits[size-1] != 9){
        digits[size-1] += 1;
        return digits;
      }; 
      
      vector<int> reserved(digits.rbegin(), digits.rend());

      reserved[0] = 0;
      size_t y = 1;

      for(int i = 1; i < size; i++){
       if(reserved[i] == 9 ){
        reserved[i] = 0;
       } else {
        reserved[i] += 1;
        y = 0;
        break;
       };
      };
      
      if(y){
        reserved.push_back(1);
      };
      
      vector<int> result(reserved.rbegin(), reserved.rend());
      
      return result;
    };
};

int main(){
  vector<int> digits = {1,2,3,4};
  Solution solution;

  vector<int> result = solution.plusOne(digits);

  for(int x: result){
    cout << x;
  }
}