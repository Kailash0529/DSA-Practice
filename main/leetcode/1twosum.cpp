#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numToIndex;
        std::vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (numToIndex.find(complement) != numToIndex.end()) {
                result.push_back(numToIndex[complement]);
                result.push_back(i);
                return result;
            }

            numToIndex[nums[i]] = i;
        }

        return result; // Return an empty vector if no solution is found.
    }
};
    