#include <vector>
#include <iostream>


std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
    return result;
}


int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> result = twoSum(nums, target);


    if (result.size() == 2) {
        std::cout << "Indices of the numbers that add up " << target << ": " << result[0] << " e " << result[1] << std::endl;
    } else {
        std::cout << "No matching pair found " << target << std::endl;
    }


    return 0;
}
