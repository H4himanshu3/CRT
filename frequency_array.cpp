#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;  // Map to store the number and its index

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];  // Calculate the complement

        // Check if the complement is already in the map
        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i};  // Return the indices if found
        }

        // Otherwise, add the current number and its index to the map
        numMap[nums[i]] = i;
    }

    // If no solution is found (though the problem assumes there will be one)
    return {};
}

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    std::vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        std::cout << "Indices: " << result[0] << " and " << result[1] << std::endl;
    } else {
        std::cout << "No solution found." << std::endl;
    }

    return 0;
}
 