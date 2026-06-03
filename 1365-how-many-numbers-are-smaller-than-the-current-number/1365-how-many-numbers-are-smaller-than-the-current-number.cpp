#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());
        unordered_map<int, int> mapping;
        for (int i = 0; i < sorted_nums.size(); i++) {
            if (mapping.find(sorted_nums[i]) == mapping.end()) {
                mapping[sorted_nums[i]] = i;
            }
        }
        vector<int> result;
        result.reserve(nums.size());
        for (int num : nums) {
            result.push_back(mapping[num]);
        }
        
        return result;
    }
};