#include <iostream>
#include <vector>

 using namespace std;

 int searchInsert(vector<int>& nums, int target) {
   int left = 0;
   int right = nums.size() - 1;

   while( left <= right){
    int i = left + (right - left);

    if(nums[i] == target){
      return i;
    } else if(nums[i] < target) {
       left = i + 1;
    } else {
      right = i - 1;
    }
   }
   return left;
}

int main(){
  vector<int> nums = {2,3,5,6};
  int target = 1;

  int result = searchInsert(nums, target);

  cout << "Output: " << result;

}