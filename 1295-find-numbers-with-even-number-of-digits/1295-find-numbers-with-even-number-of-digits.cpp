#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even_digit_count = 0;
        
        for (int num : nums) {
            if (to_string(num).length() % 2 == 0) {
                even_digit_count++;
            }
        }
        
        return even_digit_count;
    }
};