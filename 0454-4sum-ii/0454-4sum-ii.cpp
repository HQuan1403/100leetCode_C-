#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> sum_counts;
        int count = 0;
        for (int a : nums1) {
            for (int b : nums2) {
                sum_counts[a + b]++;
            }
        }
        for (int c : nums3) {
            for (int d : nums4) {
                int target = -(c + d);
                if (sum_counts.count(target)) {
                    count += sum_counts[target];
                }
            }
        }
        return count;
    }
};