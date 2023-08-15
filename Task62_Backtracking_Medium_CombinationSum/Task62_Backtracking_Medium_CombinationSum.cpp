#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> result;

    std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target) {
        std::vector<int> a = {};
        subset_edit(a, 0, target, candidates, 0);
        return result;
    }

    void subset_edit(std::vector<int>& nums, int sum, int target, std::vector<int>& candidates, int index) {
        if (sum == target) {
            result.push_back(nums);
        }
        else if (sum < target) {
            for (int i = index;i < candidates.size();i++) {
                nums.push_back(candidates[i]);
                subset_edit(nums, sum + candidates[i], target, candidates, i);
                nums.pop_back();
            }
        }
    }
};