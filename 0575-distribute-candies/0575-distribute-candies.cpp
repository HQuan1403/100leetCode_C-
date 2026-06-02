#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> unique_candies(candyType.begin(), candyType.end());
        int max_allowed = candyType.size() / 2;
        return min((int)unique_candies.size(), max_allowed);
    }
};