#include <vector>
#include <string>
#include <numeric>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<int> indices(n);
        iota(indices.begin(), indices.end(), 0);
        sort(indices.begin(), indices.end(), [&](int a, int b) {
            return heights[a] > heights[b]; 
        });
        vector<string> result;
        result.reserve(n);
        for (int idx : indices) {
            result.push_back(names[idx]);
        }
        
        return result;
    }
};