#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int max_dist = 0;
        
        // Trường hợp 1: So với nhà đầu tiên (index 0) từ cuối mảng về
        for (int i = n - 1; i >= 0; i--) {
            if (colors[i] != colors[0]) {
                max_dist = max(max_dist, i);
                break;
            }
        }
        
        // Trường hợp 2: So với nhà cuối cùng (index n - 1) từ đầu mảng đi tới
        for (int i = 0; i < n; i++) {
            if (colors[i] != colors[n - 1]) {
                max_dist = max(max_dist, n - 1 - i);
                break;
            }
        }
        
        return max_dist;
    }
};