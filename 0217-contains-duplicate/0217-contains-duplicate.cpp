class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int,int> seen;
        for (int i : nums) {
            seen[i]++;
            if (seen[i] >= 2) {
                return true;
            }
        }
        return false;
        }
    };