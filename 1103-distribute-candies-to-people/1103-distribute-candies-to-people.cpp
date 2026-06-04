#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> result(num_people, 0);
        
        int i = 0;       
        int give = 1;     
        while (candies > 0) {
            int index = i % num_people; 
            int actual_give = min(candies, give);
            result[index] += actual_give;
            candies -= actual_give;
            give++;
            i++;
        }
        
        return result;
    }
};